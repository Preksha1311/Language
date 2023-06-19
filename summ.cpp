#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ll n; cin >> n;
    vector<ll> arr(n + 1, 0);
    for (ll i = 1; i <= n; i++) cin >> arr[i];

    vector<ll> pref(n + 1, 0);
    for (ll i = 1; i <= n; i++) pref[i] = pref[i - 1] + arr[i];

    ll q; cin >> q;
    for (ll i = 0; i < q; i++) {
        ll l, r; cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }


}
