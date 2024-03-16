
#include <iostream>
using namespace std;
int_fast32_t fib(int n)
{
    int a = 0;
    int b = 1;
    int temp;

    cout << "Fibonacci series upto " << n << " terms:";
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}
int main()
{
    int r;
    cout << "Enter the number:" << endl;
    cin >> r;

    fib(r);

    return 0;
}