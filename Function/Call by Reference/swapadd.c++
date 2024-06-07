#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int add(int* a, int* b){
    return *a+*b;
}

int main(){
    int a = 5, b = 10;

    cout << "Before swapping: " << a << " "<< b << endl;
    swap(&a, &b);
    cout << "After swapping:" << a << " " << b << endl;


    int res = add(&a, &b);
    cout << "Sum of a and b : " << res ;

    return 0;
}