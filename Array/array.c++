#include <iostream>
using namespace std;

int main()
{
    // int number[15];
    // cout << "Value at 20 index" << number[20] << endl;

    int second[3] = {5,2,11};
    cout << "Value at 2 index" << second[2] << endl;

    int third[15] = {2,4};
    int n = 15;
    cout << "Printing the array :"<<endl;

    for(int i = 0; i<n; i++){
        cout << third[i]<< " ";
    }
    return 0;
}