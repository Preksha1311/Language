#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N =25e2+10;
vector<int> a(N);
int dp[N];
int func(int n , vector<int> &a){
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans =1;

    for(int i=0;i<n;i++){
        if(a[i]<a[n]){
            ans  = max(ans,func(i,a)+1);
        }
    }
    return dp[n] = ans;
}


long long maxiAnd(int n,vector<int> &a){
    int ans = a[0];
    for(int i=0;i<a.size();i++){
       int temp=0;
      //temp =  a[i]<<1;
    int temp=0;
        while(a[i]<=0){
            temp =  a[i]-1 | 1;
        }
     cout<<temp<<" ";
     ans = ans & temp;
    }

return ans;
}
int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

// memset(dp,-1,sizeof(dp));
// int ans= 0;
int n;cin>>n;
     vector <int> a(n,0);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     cout<<maxiAnd(n,a);
//     for(int i=0;i<a.size();i++){
//        ans  = max( ans, func(i,a));
//     }
// cout<<ans;


}