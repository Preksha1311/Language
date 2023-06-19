#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ll n; cin >> n;
    vector<ll> arr(n, 0);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    map<ll, vector<ll> > occ;
    for (ll i = 0; i < n; i++) {
        occ[arr[i]].push_back(i);
    }

    ll q; cin >> q;
    while (q--) {
        ll tofind, indx; cin >> tofind >> indx;
        ll lo = 0, hi = ((ll)occ[tofind].size()) - 1; //because is size =0 then size becomes -1 and siz´is an unsigned so it uses a lot of search space
        ll ans = -1;
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (occ[tofind][mid] < indx) {

                hi = mid - 1;

            }
            else {
                ans = occ[tofind][mid];
                lo = mid + 1;
            }
        }
        cout << ans << endl;
    }
}