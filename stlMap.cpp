#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

//pre computation

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

//queries
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}