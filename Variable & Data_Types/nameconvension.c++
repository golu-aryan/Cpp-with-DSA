#include<iostream>
using namespace std;
int main() {
    int a = 123;

    cout << a << "\t" << sizeof(a) << endl;

    char b = 'v';

    cout << b << "\t" << sizeof(b) << endl;

    bool c = true;

    cout << c << "\t" << sizeof(c) << endl;

    float f = 1.2;

    cout << f << "\t" << sizeof(f) << endl;

    double d = 1.23;

    cout << d << "\t" << sizeof(d) << endl;

    return 0;
}