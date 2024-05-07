
#include <iostream>
using namespace std;

class Addition
{
private:
    int arr[3][3];

public:
    void input()
    {
        cout << "Enter 3*3 matrix elements : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }
    }
    void output()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
                sum += arr[i][j];
            }
            cout << endl;
        }
        cout << "Total sum of 3*3 matrix elements is: " << sum << " ";
    }
};
int main()
{
    Addition a;
    a.input();
    a.output();

    return 0;
}