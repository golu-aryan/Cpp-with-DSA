#include <iostream>
using namespace std;
class A
{
public:
    int n;
    string name;

    void input()
    {
        cout << "Enter number :" << endl;
        cin >> n;
        cout << "Enter name :" << endl;
        cin >> name;
    }
};
int main()
{
    A obj;
    obj.n;
    obj.name;
    obj.input();
    cout << "Number is:" << obj.n << endl;
    cout << "Name is:" << obj.name << endl;
    return 0;
}