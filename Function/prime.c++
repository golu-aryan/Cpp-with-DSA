#include <iostream>
using namespace std;
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout << "Enter number:";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << "is prime number" << endl;
    }
    else
    {
        cout << num << "is not prime number";
    }
    return 0;
}