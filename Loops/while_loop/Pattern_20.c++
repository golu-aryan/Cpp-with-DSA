/*
    ****
     ***
      **
       *
*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int i = 1;
    while(i<=n){
        int s = 1;
        while(s<=i-1){
            cout << " ";
            s++;
        }
        int j = 1;
        while(j<=n-i+1){
            cout << "*";
            j++;
        } 
        cout << endl;
        i++;
    }
}