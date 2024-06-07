#include<iostream>
using namespace std;
//Function to add two integers
int add(int a, int b)
{
    return a+b;
}

//Function to add three integers
int add(int a, int b,int c)
{
    return a+b+c;
}

int main()
{
    int result = add(3,4);
    cout << "result="<<result << endl;
    int r = add(5,6,7);
    cout << "Sum is =" << r << endl;

    return 0;
}