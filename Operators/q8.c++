#include<iostream>
using namespace std;
int main(){

    int a = 36;

    int b = (--a) - (--a) - (--a) - (--a) + (a++) + (++a) - (a++) - (++a);
    cout << b;
    return 0;
}