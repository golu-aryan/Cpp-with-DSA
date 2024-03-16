#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    cout << "Enter the number:" << endl;
    cin >> n >> r;

    int result = nCr(n,r);

    cout << "Factorial Number is :" << result;

    return 0;
}