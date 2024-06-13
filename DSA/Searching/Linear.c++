#include <iostream>
using namespace std;
void linearSearch(int arr[], int key, int size)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Sry Not found! Try Again" << endl;
}

int main(){
    int ar[] = {2,4,6,7,8,10};
    int n;
    cout << "Enter the number which you want to found ";

    cin >> n;

    linearSearch(ar, n, 6);

}
   