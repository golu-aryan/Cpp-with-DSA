#include <iostream>
using namespace std;
class add
{
private:
    int n1, n2, s;

public:
    void sum(int y, int x)
    {
        s = y + x;
    }
    // void res()
    // {
    //     cout << "The sum is:" << s << endl;
    // }
};
int main()
{
    add obj;
    obj.sum(2, 3);
    // obj.res();

    return 0;
}