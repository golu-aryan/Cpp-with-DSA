/*write a program to print lowercase, uppercase & numeric*/
#include<iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter any lower,upper and numeric value :" << endl;
    cin >> c;

    if(c >= 'a' && c <= 'z') {
        cout << "this is lowercase" << endl;
    } 
    else if(c >= 'A' && c <= 'Z') {
        cout << "THIS IS UPPERCASE" << endl;
    }
    else if(c >= '0' && c<= '9'){
        cout << "This is numeric value";
    }
}