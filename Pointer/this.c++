#include <iostream>
using namespace std;
class Number
{
private:
    int a;

public:
    Number(int a)
    {
        this->a = a;
    }
    void print(){
        cout << "A = " << a << endl;
    }
};
int main()
{
    Number n(12);
    // int x = 10;
    n.print();
    return 0;
}