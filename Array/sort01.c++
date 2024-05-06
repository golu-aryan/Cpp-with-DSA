#include <iostream>
using namespace std;
void printArray(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortIng(int arr[], int n)
{

    int left = 0, right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        // arr[left] == 1 && arr[j] == 0; then
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 0, 0, 0, 0, 1, 0};

    sortIng(arr, 8);
    printArray(arr, 8);

    return 0;
}