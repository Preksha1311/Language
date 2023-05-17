#include<iostream>
#include<string>
using namespace std;

class vehicles{
int wheels;
public:
void setwheels(int);
int getwheels();
};

class automobiles: public vehicles{
string fuel;
public:
void setfuel(const string &x){
    fuel = x;
}
void print(){
cout<<"wheels of automobiles:"<<getwheels()<<endl;
cout<<"fuel: "<<fuel<<endl;
}

};
class pulled_vehicles: public vehicles{
string cattle;
public:
void setcattle(const string &x){
    cattle=x;
}
void print(){

    //task: print name of object
    cout<<"wheels of pulling vehicle"<<getwheels()<<endl;
    cout<<"cattle is "<<cattle<<endl;
}

};

void vehicles :: setwheels(int x){
wheels = x;
}
int vehicles :: getwheels(){
    cout<<wheels<<endl;
    return wheels;
}


int main(){
    automobiles car;
    car.setwheels(4);
    car.setfuel("diesel");
    car.getwheels();
    car.print();
    pulled_vehicles cart;
    cart.setwheels(2);
    cart.setcattle("buffalo");
    cart.print();
return 0;
}




