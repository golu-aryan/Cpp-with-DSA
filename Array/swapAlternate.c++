#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int a[6] = {1, 2, 4, 6, 7, 8};
    int b[5] = {2, 5, 1, 7, 9};

    swapAlternate(a, 6);
    swapAlternate(b, 5);

    printArray(a, 6);
    printArray(b, 5);
    return 0;
}