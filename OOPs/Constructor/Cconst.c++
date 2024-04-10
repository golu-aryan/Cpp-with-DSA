#include <iostream>
using namespace std;
class Sample
{
    int id;

public:
    void init(int x){
        id = x;
    }
    void display(){
        cout << endl << "Id -" << id;
    }
};
int main()
{
    Sample obj1;
    obj1.init(23);
    obj1.display();

    Sample obj2(obj1); // Copy constructor call or obj2 = obj1;
    obj2.display();   
    return 0;
}