#include<bits/stdc++.h>
using namespace std;
int rainWater(vector<int> &nums){
    int n=nums.size();
    vector<int> left(n,0);
    vector<int> right(n,0);

    left[0]=nums[0];
    for(int i=1;i<n;i++){
    left[i]=max(nums[i],left[i-1]);
    //cout<<endl<<left[i]<<" ";
    
   }
    for(int i=n-1;i>=0;i--){
    right[i]=max(nums[i],right[i+1]);
   //cout<<endl<<right[i]<<" ";
   }
    sort(right.begin(),right.end(),greater<int>() );

    vector<int>ans(n,0);
    int sum=0;
    for(int i=0;i<n;i++){
        ans[i]=min(right[i],left[i])-nums[i];
//cout<<ans[i];
        sum = sum+ans[i];
    }
 // for(int i=0;i<n;i++) cout<<right[i]<<" ";
   return sum;
}
int main() {
	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);
    int n;cin>>n;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    //for(int i=0;i<n;i++) cout<<nums[i]<<" ";
    cout<<"how much rain does it can  hold between the buildings?";
    cout<<"\nthe amount will be:"<<rainWater(nums);

}