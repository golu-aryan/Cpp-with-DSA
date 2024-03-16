#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{

    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;
    cout << "Enter number please:" << endl;
    cin >> n >> r;

    cout << "Answer of nCr is:" << nCr(n, r) << endl;
    return 0;
}