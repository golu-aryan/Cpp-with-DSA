#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the digit :" << endl;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        n /= 10;
        count++;
    }

    cout << "The number of your digit are :" << count;

    return 0;
}