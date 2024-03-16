#include <iostream>
using namespace std;

int main()
{
    int n[20], sz;
    cout << "Enter the size of Array:" << endl;
    cin >> sz;

    cout << "Enter the Array Elements:" << endl;
    for (int i = 0; i < sz; i++)
    {
        cin >> n[i];
    }
    cout << "Double of original array is :" << endl;

    for (int i = 0; i < sz; i++)
    {
        cout << n[i]*2;
    }
    return 0;
}