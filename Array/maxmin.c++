#include <iostream>
using namespace std;
int getmax(int arr[], int size)
{
    int maxi = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}
int getmin(int arr[], int size)
{
    int mini = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]); 
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}
int main()
{
    int size;
    cout << "Enter the size of Array :" << endl;
    cin >> size;

    int arr[100];
    cout << "Enter the Array elements: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum value is" << getmax(arr, size) << endl;
    cout << "Minimum value is" << getmin(arr, size) << endl;
    return 0;
}