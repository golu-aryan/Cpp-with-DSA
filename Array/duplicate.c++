#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1; // If no duplicate found
}

int main()
{  
    int ar[] = {2, 7, 3, 4, 56, 7, 8};
    int size = sizeof(ar) / sizeof(*ar);

    int duplicateNumber = findDuplicate(ar, size);
    if (duplicateNumber != -1)
    {
        cout << "The Duplicate" << findDuplicate(ar, size) << endl;
    }
}