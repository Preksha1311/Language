//pointer to function
#include<iostream>
using namespace std;
float sum(int x, int y){
    return (x+y);
}
int main(){
    int a,b;
    cout<<"enter 2 num"<<endl;
    cin>>a>>b;
// int add = sum (a,b);
/* 
   
    *p=&a float *p (int, int)
*/
// cout<<add;
float(*p)(int, int);
p=&sum;
int addi;
addi = (*p)(a,b);
 cout<<addi;
    return 0;
}