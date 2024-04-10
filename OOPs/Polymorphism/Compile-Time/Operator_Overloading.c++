#include <iostream>
using namespace std;
class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output is :" << value2 - value1 << endl;
        cout << "HELLO WORLD!" << endl;
    }
    void operator() (){
        cout << "Main Bracket hu " << this->a << endl;
    }
};
int main()
{
    B obj1, obj2;

    obj1.a = 2;
    obj2.a = 5;

    obj1 + obj2;
    obj1();
    return 0;
}