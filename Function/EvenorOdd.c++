#include <iostream>
using namespace std;
int isEven(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is Even" << endl;
    }
    else
    {
        cout << n << " is Odd";
    }
}
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    isEven(n);
    return 0;
}