#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:
    char level;

    Hero(int health)
    {
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // Copy conrtuctor
    Hero(Hero &temp)
    {
        cout << "cooy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << endl;
        cout << "Health" << this->health << " , ";
        cout << "Level" << this->level << endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char l)
    {
        level = l;
    }
};

int main()
{
    Hero s(70, 'c');
    s.print();

    // Copy Constructor
    Hero r(s);
    r.print();
    return 0;
}