/*write a program to print bitwise operators*/
#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;

    cout << "a|b" << (a | b) << endl;
    cout << "a&b" << (a & b) << endl;
    cout << "~a" << ~a << endl;
    cout << "a^b" << (a ^ b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 2) << endl;
    cout << (24 << 2) << endl;

    
    return 0;
}