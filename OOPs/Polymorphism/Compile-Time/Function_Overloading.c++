#include<iostream>
using namespace std;
class A{
    public:
    void function(){
        cout << "This is First Method" << endl;
    }
    void function(int n, string name){
        cout << "This is second Method with parameters" << endl;
    } 
    int function(string name){
        cout << "This is not possible for overloading" << endl;
        return 1;
    }
};
int main() 
{
    A a;
    a.function();
    a.function(4,"a");
    a.function("h");
    return 0;
}