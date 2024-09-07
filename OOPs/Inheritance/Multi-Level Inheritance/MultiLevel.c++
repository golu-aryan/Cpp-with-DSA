#include<iostream>
using namespace std;
class Animal {
    public :
    int age;
    int weight;

    public :
    void speak(){
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal{
    
};
class GermanSepherd: public Dog{

};
int main()
{
    GermanSepherd g;
    g.speak();

    return 0;
}