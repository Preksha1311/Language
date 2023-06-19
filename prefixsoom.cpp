#include<bits/stdc++.h>


#define ll long long int
using namespace std;

int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ;

    ll x;
    cin >> x;
    vector<ll> arr(x + 1, 0);
    for (ll i = 1; i <= x; i++) {
        cin >> arr[i];
    }

    vector<ll> p(x + 1, 0);

    for (ll i = 1; i <= x; i++) {
        p[i] = p[i - 1] + arr[i];
        cout << p[i] << " ";
    }
    cout << endl;

    ll q;
    cin >> q;

    for (ll i = 0; i < q; i++) {
        ll l, r;
        cin >> l >> r;
        cout << p[r] - p[l - 1] << endl;
    }

    return 0;
}
