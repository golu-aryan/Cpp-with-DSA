/*write a program to enter digit print their sum & product*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    int prod = 1;
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n /= 10;
    }
    int ans = prod - sum;
    cout << ans ;

    return 0;
}