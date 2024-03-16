#include <iostream>
using namespace std;
int main()
{
    // int a = 2.0/5;
    // cout << a << endl;
    // cout << 2.0/5 << endl;

    int a = 2;
    int b = 3;

    bool first = (a == b); // output is 0 that mean this is false
    cout << first << endl;

    bool second = (a >= b); // output is 0 that mean this is false
    cout << second << endl;
    
    bool third = (a <= b); // output is 1 that mean this is true
    cout << third << endl;
    
    bool fourth = (a < b); // output is 1 that mean this is true
    cout << fourth << endl;
    
    bool fifth = (a > b); // output is 0 that mean this is false
    cout << fifth << endl;
    
    bool sixth = (a != b); // output is 1 that mean this is true
    cout << sixth << endl;

    return 0;
}