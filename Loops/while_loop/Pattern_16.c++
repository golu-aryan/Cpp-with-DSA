/*
A
BC
DEF
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please Input Number:";
    cin >> n;
    int i = 1;
    char v = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << v << " ";
            v++;
            j++;
        }
        cout << endl;
        i++;
    }
}