#include <bits/stdc++.h>
using namespace std;

int main(){

ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int hash[13] = {0};
    for(int i = 0 ; i < n;i++)
    {
        hash[arr[i]] += 1;
    }

    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        int m;
        cin>>m;
        cout<<hash[m]<<endl;
    }

    return 0;

}