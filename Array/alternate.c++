#include <iostream>
using namespace std;

void printing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void alternate(int ar[], int size)
{

    int temp;
    // Swapping elements by alternate
    for (int i = 0; i < size-1; i += 2)
    {
        if (i + 1 < size-1)
        {
            temp = ar[i+1];
            ar[i+1] = ar[i];
            ar[i] = temp;
        }
    }
}
int main()
{
    int ar[5] = {2, 5, 4, 6, 7};        // This is odd elements
    int arr[6] = {2, 4, 55, 6, 77, 88}; // This is even elements

    alternate(ar, 5);
    alternate(arr, 6);

    printing(ar, 5);
    printing(arr, 6);

    return 0;
}