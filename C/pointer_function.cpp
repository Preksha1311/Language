#include<iostream>
using namespace std;

int& sum(int x,int y){
int i=x+y;
    return i;
}

int main(){
    //pointer of a function
int (*p) (int, int);
        cout <<(*p)(5,7);
    
    return 0;
}