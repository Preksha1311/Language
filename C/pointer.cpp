#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int *point = &a;
    int **poo = &point;
    cout << *point << endl;
    cout << a << endl;
    cout << point << endl;
    cout <<"double dereferencing of a "<< **poo << endl;
    cout << &a << endl;
    return 0;
}