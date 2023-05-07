#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t){
int x;
	cin>>x;
char arr[x];
	for(int i=0;i<x;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<x;i++){
	    cout<<arr[i];
	}
	int count=0;
	for(int i=0;i<x;i++){
	    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
	    {
	        count=0;
	    }
	    else{
	        count++;
	        
	    }
	        if(count>=4){
	            cout<<"NO"<<endl;
	    
	            
	        }
            else if(i>=x&&count<4){
cout<<"yes"<<endl;
            }
	    
	}
	// if(count<4){
	//         cout<<"yes"<<endl;
	//     }
        t--;
}
	return 0;
}
