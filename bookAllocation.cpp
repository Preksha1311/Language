#include<bits/stdc++.h>
using namespace std;
//book allocation problem
// allocate n books to m students such that the total no of pages are minimum.
//declaration

bool pos(int arr[], int n, int m, int mid){
 int pagecount=0;
 int student=1;

 for(int i=0; i<n;i++){

        if(pagecount<mid)
        {
            pagecount+=arr[i];
        }
        else{
            student++;
            if(student>m||arr[i]>mid){
                return false;
            }
            pagecount=arr[i];
        }
    }
    return true;
}


int allocateBooks(int arr[], int n, int m)
{
    int ans=-1;
    //perform BS
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e= sum;
    int mid = s + (e-s)/2;
    while(s<=e){

     if(pos(arr,n,m,mid)){
        ans=mid;
        e=mid-1;
     }
     else{
        s=mid+1;
     }
mid = s+(e-s)/2;
      }

    return ans;
}

int main()
{
    int n;
    int arr[4];
    //storing pages of books
    for(int i=0;i<4;i++){
        cout<<"enter element" <<i;
        cin>>arr[i];
    }
int m=2;
    
    cout<<allocateBooks(arr,4,2);
return 0;
}