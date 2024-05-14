#include<iostream>
using namespace std;
int main(){

    int a = 20;

    int b = (++a) - (a++) - (--a) + (a--) + (a++) + (--a) - (a--) + (a++) - (--a) - (a--);
    cout << b;
    return 0;
}