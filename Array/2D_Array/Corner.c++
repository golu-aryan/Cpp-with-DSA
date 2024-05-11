#include <iostream>
using namespace std;

int main()
{
    int arr[3][3], i, j;

    cout << "Enter 3*3 matrix elements :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The Matrix of 3*3 elements are:" << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The Four courner of the 3*3 matrix elements are :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i == 0 || i == 2) && (j == 0 || j == 2))
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}