#include <iostream>
using namespace std;

int reverse(int n, int rev = 0)
{

    if (n == 0)
    {
        return rev;
    }
    else
    {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        return reverse(n / 10 , rev);
    }
}

int main()
{
    int number = 12345;

    cout << reverse(number);

    return 0;
}