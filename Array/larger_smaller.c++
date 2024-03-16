#include <iostream>
using namespace std;
int main()
{
    int a[10], size, lrg, sml;
    cout << "Enter the size of Array Elements:" << endl;
    cin >> size;

    cout << "Enter Array elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    lrg = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > lrg)
        {
            lrg = a[i];
        }
    }
    cout << "Largest element is :" << lrg << endl;

    sml = a[0];
    for (int i = 0; i < size; i++)
    {
        if (sml > a[i])
        {
            sml = a[i];
        }
    }
    cout << "Smallest element is:" << sml << endl;

    return 0;
}