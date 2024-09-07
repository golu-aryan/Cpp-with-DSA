#include <iostream>
using namespace std;
class Hero
{
public:
    Hero()
    { // Constructor
        cout << "Constructor called" << endl;
    }
};
int main()
{
    // Object created statically
    Hero Aryan;

    // Object created dynamically
    Hero *h = new Hero;
    Hero *h = new Hero(); // Output of both is same

    return 0;
}