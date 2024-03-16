#include <iostream>
using namespace std;
int main()
{
    int i, factor = 0, n;
    cout << "Enter the number:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            factor++;
        }
    }
    if (factor == 2)
    {
        cout << "This is prime " << endl;
    }
    else
    {
        cout << "This is not prime";
    }
} 