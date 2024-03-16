#include <iostream>
using namespace std;
int swap(int &x, int &y)        //Call by Reference
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cout << "Enter the number:" << endl;
    cin >> a >> b;
    cout << "Before swap, value of a and b is = " << a << " " << b << endl;

    swap(a, b);
    cout << "After swap, value of a and b is = " << a << " " << b << endl;
    return 0;
}