#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:" << endl;
    cin >> n;

    cout << "Printing count from 1 to n " << endl;

    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
    return 0;
} 