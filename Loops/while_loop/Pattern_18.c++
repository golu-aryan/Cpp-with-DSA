/*
D
CD
BCD
ABCD
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char st = 'A' + n - i;
        while (j <= i)
        {
            cout << st << " ";
            st++;
            j++;
        }
        cout << endl;
        i++;
    }
}