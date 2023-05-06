#include<iostream>
using namespace std;
int f(int n,vector<int> &dp){
    if(n<=1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]= f(n-1,dp)+f(n-1,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int> dp (n+1,-1);
    cout<<f(n,dp);
    return 0;
}