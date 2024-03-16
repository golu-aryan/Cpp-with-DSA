#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 || arr[i] < 0)
        {
            s += arr[i];
        }
    }
    return s;
}
int main()
{
    int ar[100], i, n;
    cout << "Enter the array size:" << endl;
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << "Sum of all elements are:" << sum(ar, n);
    return 0;
}