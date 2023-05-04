#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int *point = &a;
    cout << *point << endl;
    cout << a << endl;
    cout << point << endl;
    cout << &a << endl;
    return 0;
}