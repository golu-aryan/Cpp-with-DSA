#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the binary number:";
    cin >> n;

    int ans = 0;
    for (i = 0; i <= n; i++)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        n /= 10;
    }
    cout << "Answer is :" << ans;

    return 0;
}