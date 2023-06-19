#include<bits/stdc++.h>


#define ll long long int
using namespace std;



int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ;

    ll x;
    cin >> x;
    vector<ll> arr(x , 0);
    for (ll i = 0; i < x; i++) {
        cin >> arr[i];
    }

    map<ll , vector <ll > > mymap;
    for (ll i = 0; i < x; i++) {
        mymap[arr[i]].push_back(i);
    }

    //last occ before indx or at y


    ll q; cin >> q;

    while (q--) {

        ll x, y, z;
        cin >> x >> y >> z;

        ll lo = 0, hi = ((ll)mymap[x].size()) - 1;
        ll ans = -1, ans2 = -1;

        //first occ
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (mymap[x][mid] < y) {
                lo = mid + 1;
            }
            else {
                ans = mid;
                hi = mid - 1;
            }
        }
        cout << ans << endl;

//last occ

        lo = 0, hi = ((ll)mymap[x].size()) - 1;
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (mymap[x][mid] > z) {
                hi = mid - 1;
            }
            else {
                ans2 = mid;

                lo = mid + 1;
            }
        }
        cout << ans2 << endl;
        cout << ans2 - ans + 1 << endl;
    }

}