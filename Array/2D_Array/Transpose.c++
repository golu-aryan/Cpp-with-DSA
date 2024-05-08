#include <iostream>
using namespace std;
int main()
{
    int trans[3][3], n[3][3];

    cout << "Enter 3*3 matrix elements : " << endl;

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> n[i][j];
        }
        cout << endl;
    }
    cout << "The Matrix elements are : " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans[j][i] = n[i][j];
        }
        cout << endl;
    }
    cout << "Transpose of 3*3 matrix elements are : " << endl;

     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}