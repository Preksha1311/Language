#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    ;
    int t; cin >> t;
    while (t--) {
        int n , k , l; cin >> n >> k >> l;
        pair<int , int> p[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i].first >> p[i].second;
        }
        int sum = 0;
        int arr[k];
        for (int j = 0; j < k; j++) {
            int maxi = -1;
            for (int i = 0; i < n; i++) {
                maxi = -1;
                if (p[i].second == l)
                {
                    if (p[i].first > maxi)
                    {
                        maxi = p[i].first;
                    }
                }
            }
            arr[j] = maxi;
            sum += arr[j];
            //   if(sum>=)

        }

        cout << sum << endl;
    }
    return 0;
}
