#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // Write your code here
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    int brr[d];
    int res[n];
    for (int i = d; i < n; i++)
    {
        res[i - d] = arr[i];
       //  cout<<res[i-d]<<" ";
    }
    
    //upr vla shi h
    for (int j = 0; j < d; j++)
    {
        brr[j] = arr[j];
      //  cout<<brr[j]<<" ";
    }
//cout<<brr[d-d];
    
    // for (int k = d; k < n+3; k++)
    // {
    //     res[k] = brr[k - d ];
    //     //   cout<<res[k]<<" ";
    
    // }
      for (int k = n-d ; k < n; k++) {
    res[k] = brr[k - (n-d) ];
  }
   //cout<<res[d];
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}