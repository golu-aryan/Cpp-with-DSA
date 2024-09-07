#include<iostream>
using namespace std;
int main() {
    int a , b;
    cout << "Enter first number: "<<endl;
    cin >> a;
    cout << "Enter the second number :" << endl;
    cin >> b;

    if(a>b) {
        cout << "a is greaters than b";
    }
    else if(b>a){
        cout << "b is greaters than a";
    }
    else {
        cout << "sry! ";
    }
    
}