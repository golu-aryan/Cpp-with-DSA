#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number";
    // cin >> n;

    for(int a = 0, b = 1; a>=0 && b>=1; a--,b--){      
        cout << a << " "<< b << endl;
    }
    return 0;
}