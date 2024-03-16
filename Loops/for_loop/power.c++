#include <iostream>
using namespace std;
int main()
{
    int ans = 1;
    int a, b;
    cout << "Enter the number and power:";
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    cout << "The power of your number is = " << ans;

    return 0;
}