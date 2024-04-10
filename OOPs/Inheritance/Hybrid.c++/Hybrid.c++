#include <iostream>
using namespace std;
// Base Class 1
class Animal
{
public:
    void eat()
    {
        cout << "Animal eats." << endl;
    }
};

// Base Class 2
class Mammal
{
public:
    void breathe()
    {
        cout << "Mammal Breathes." << endl;
    }
};

// Derived class 1 inheriting from both Animal and Mammal
class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        cout << "Dog barks." << endl;
    }
};
// Derived class 2 inheriting from Animal
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat Meows." << endl;
    }
};
int main()
{
    Dog dog;
    dog.eat();     // Accessing eat() from Animal
    dog.breathe(); // Accessing breathe() form Mammal
    dog.bark();    // Accessing bark() from Dog

    Cat cat;  
    cat.eat();  // Accessing eat() from Animal
    cat.meow(); // Accessing meow() form cat
    return 0;
}