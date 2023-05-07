#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int a=k;
	    for(int i=0;i<n;i++){
	        int b=a;
	        //cout<<a;
	        a = a-arr[i];
	        if(a>=0)
	        {
	            cout<<"1";
	           
	        }
	        else{
	            cout<<"0";
	            a=b;
	        }
	        
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
