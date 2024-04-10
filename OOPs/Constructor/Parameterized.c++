#include <iostream>
using namespace std;
class Hero
{
private:
    int health;
    char level;

public:
    // Parameterized Constructor
    Hero(int health)
    {
        // This is a pointer which contain the address of current object Aryan
        cout << "Size of this ->" << this << endl;
        // If you want to access any datamember and function of current object then use this->
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
 
        cout << level <<" ";
        cout << health;
    }
};
int main()
{
    Hero Aryan(10); // Statically parameterized
    cout << &Aryan;

    Hero *h = new Hero(11); // Dynamically parameterized which is stored in heap memory
    Hero temp(12, 'a');

    return 0;   
}