#include<iostream>
using namespace std;
//Function Signature
void printCounting(int n){
    //Function body
    for(int i = 1; i<=n; i++){
        cout << i << " ";
    }
}
int main() 
{
    int n;
    cout << "Enter number:" << endl;
    cin >> n;
    //Function Call 
    printCounting(n);

    return 0;
} 