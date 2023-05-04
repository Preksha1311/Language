#include<iostream>
using namespace std;

int fib (int n){
      //base 
if (n<=1)
    return n;
    cout<<"hi";
    return (fib(n-1) + fib(n-2));
}

int main(){
    
    //fibonacci
    
    int n;
    cout<<"enter the terms"<<endl;
    cin>>n;

    cout<<fib(n);

    return 0;
}
// 0 1 1 2 3 5 8 13 21 34 

