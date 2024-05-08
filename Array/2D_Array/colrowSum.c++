#include <iostream>
using namespace std;
class rowCol
{
private:
    int a[3][3];

public:
    void enter()
    {
        cout << "Enter 3*3 matrix elements:" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
            cout << endl;
        }
    }

    void exit()
    {
        cout << "Matrix Elements are :" << endl;
        for (int i = 0; i < 3; i++)
        {
            int rowSum = 0;
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
                rowSum = rowSum + a[i][j];
            }
            cout << "Sum of row " << i + 1 << " : " << rowSum;
            cout << endl;
        }
        for (int j = 0; j < 3; j++)
        {
            int colSum = 0;
            for (int i = 0; i < 3; i++)
            {
                colSum = colSum + a[i][j];
            }
            cout << "Sum of Column " << j + 1 << " : " << colSum << endl;
        }
    }
};
int main()
{
    rowCol rc;
    rc.enter();
    rc.exit();

    return 0;
}