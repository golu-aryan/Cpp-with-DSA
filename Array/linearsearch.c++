//Write a program to enter number by the user and check the number which is available or not in array elements with use of Linear Search
#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int key;
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    // Whether 1 is present in it or not?
    cout << "Enter the key:" << endl;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;
}