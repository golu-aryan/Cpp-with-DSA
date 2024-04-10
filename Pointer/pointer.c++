#include <iostream>
using namespace std;
int main()
{
    int i = 12;
    int *p = &i;

    cout << *p << endl;
    //* mean that value at address
    // p me jo i ka address h uss i ke address ka valu
    cout << p << endl;
    // Only Print p then the output is address of p in hexadecimal format
    cout << "Size of integer is:" << sizeof(i) << endl;
    cout << "Size of pointer is:" << sizeof(p) << endl;

    double d = 4.3;
    double *ptr = &d;

    cout << "Size of integer is:" << sizeof(d) << endl;
    cout << "Size of pointer is:" << sizeof(ptr) << endl;

    return 0;
}