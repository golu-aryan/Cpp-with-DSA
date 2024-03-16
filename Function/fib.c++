#include <iostream>
using namespace std;

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n)
{
    int a = 0, b = 1;
    int temp;

    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";

        temp = a + b;
        a = b;
        b = temp;
    }

    cout << endl;
}

// Function to calculate the nth Fibonacci number
int fibonacciAtPosition(int n)
{
    if (n <= 1)
        return n;

    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main()
{
    int terms, position;

    cout << "Enter the number of terms for Fibonacci series:" << endl;
    cin >> terms;

    generateFibonacci(terms);

    cout << "Enter the position (n) to find the nth Fibonacci number:" << endl;
    cin >> position;

    int result = fibonacciAtPosition(position);
    cout << "The Fibonacci number at position " << position << " is: " << result << endl;

    return 0;
}
