#include<iostream>
using namespace std;

class yo{
int a=9;
public:
void setdata(int x){
    a=x;
}
int getdata(){
  int x;
    x=a;
    return a+x;
}
};

int main(){

    yo p;
    cout<<p.getdata();
   

    return 0;
}