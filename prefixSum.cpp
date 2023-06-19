#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ll n; cin >> n;
    vector<ll> arr(n + 1, 0);
    for (ll i = 1; i <= n; i++) cin >> arr[i];

    ll ans = -1e18, prefSum = 0, minPrefSum = 0;  //-1e18 is negative infinity
    ll kahaMila = 0, L = -1, R = -1;
    for (ll i = 1; i <= n; i++) {
        prefSum += arr[i];
        if (prefSum - minPrefSum > ans) {
            ans = prefSum - minPrefSum;
            R = i;
            L = kahaMila + 1;
        }
        if (prefSum < minPrefSum) {
            minPrefSum = prefSum;
            kahaMila = i;
        }
    }
    for (ll i = L; i <= R; i++) cout << arr[i] << " ";
    cout << endl;
    cout << ans << endl;
}