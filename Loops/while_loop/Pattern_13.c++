/*
ABC
DEF
GHI
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int i = 1;
    char v = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << v << " ";
            v++;
            j++;
        }
        cout << endl;
        i++;
    }
}