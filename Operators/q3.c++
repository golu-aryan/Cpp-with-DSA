#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int b = 2;

    if(a-- > 0 || ++b > 2)
    {
        cout << "Stage 1 - Inside If " << endl;
    } else {
        cout << "Stage 2 - Inside else" << endl;
    }
    cout << a << " " << b << endl;
    //output is Stage 1 - Inside if 0 2
    return 0;
}