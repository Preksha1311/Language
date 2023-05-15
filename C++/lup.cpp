//Program not working properly please troubleshoot 
#include<iostream>
using namespace std;
int main(){
    string x;
    char n;
    int y;
    cout<<"enter your choice :"<<endl<<"1.Upper to lower"<<endl<<"2.Lower to upper"<<endl;
    cin>>y;
    cout<<"enter the string : ";
    cin>>x;
    if(y==1){
    for(int i=0;i<=x.length();i++)
    {
        if(97<=x[i]<=122){
        n=x[i]-32;
        cout<<n<<" ";
        }
    }
    }
    else{
    for(int i=0;i<=x.length();i++)
        if(65<=x[i]<=90){
            n=x[i]+32;
        }
        cout<<n<<" ";
    }
    
 //   cout<<'K'-'+'<<endl;
    return 0;
}