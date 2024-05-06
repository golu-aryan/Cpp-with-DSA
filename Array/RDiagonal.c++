#include <iostream>
using namespace std;
class Diag
{
    int arr[3][3];

public:
    void put()
    {
        cout << "Enter 3*3 matrix elements :" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }
    }
    void display(){
         for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void get()
    {
        cout << "The Left Diagonal of matrix " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i + j == 2)
                {
                    cout << arr[i][j];
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    Diag d;
    d.put();
    d.display();
    d.get();

    return 0;
}