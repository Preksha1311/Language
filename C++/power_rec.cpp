#include<iostream>
using namespace std;

int power (int x , int y){
if (y==0){
    return 1;
}
return x * power (x,y-1);
}

int main(){
//x power y
for ( int i=0;i<5;i++){
int x;
cin>>x;
int y;
cin>>y;
int answer = 1;
answer = power(x,y);
cout<<answer<<'\n';
}
//cout<<x<<"to the power"<<y<<endl;
// for(int i = 0; i < y;i++){
// answer = answer * x;
// }

   return 0;
}