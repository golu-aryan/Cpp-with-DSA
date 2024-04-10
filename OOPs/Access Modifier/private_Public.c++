#include <iostream>
using namespace std;
class A
{
    int id; // By default access modifier is Private
public:
    char name;
    string place;
    int getid(){
        return id;
    }
    void setid(int n){
        id = n;
    }
};
int main()
{
    // Creation of Object
    A obj;
    obj.name = 'A';
    obj.place = "Bihar";
    cout << "Id is:" << obj.getid() << endl; 
    //Set the number 
    obj.setid(1);
    cout << "your id is:" << obj.getid() << endl; //Then the value is 1 because of setid(1)
    cout << "Name is:" << obj.name << endl; // This is public that's why accessable
    cout << "Place is: " << obj.place << endl;

    return 0;
}