#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter teh number:" << endl;
    cin >> n;

    cout << " Priting count from 1 to n";
    int i = 1;
    for (;;)
    {
        if (i <= n){
            cout << i << endl;
    } else {
        break;
    }
    i++;

    return 0;
}