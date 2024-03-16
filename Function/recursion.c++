#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int res = n + sum(n - 1);
    // int res = 5 + nSum(4);
    // int res = 4 + nSum(3);
    // int res = 3 + nSum(2);    // nSum(3)
    // int res = 2 + nSum(1);    // nSum(2)
    // int res = 1 + nSum(0);    // nSum(1)
    return res;
}
int main()
{
    int n = 5;
    cout << " sum = " << sum(n);

    return 0;
}