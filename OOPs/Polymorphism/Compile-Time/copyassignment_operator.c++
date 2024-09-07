#include<iostream>
using namespace std;
class A{
    public:
    int n;
    void getdata(){
        cout <<" " << "Enter number:" << endl;
        cin >> n;
    }
    void display(){
        cout << "The number is :" << n;
    }

    //copy assignment operator 
    A& operator= (const A& obj){
        if(this != &obj){
            n = obj.n;
        }
        return *this;
    }
};

int main()
{
    A oj1;
    oj1.getdata();
    oj1.display();

    A oj2;
    oj2.getdata();
    oj2.display();

    oj1 = oj2;
    cout << "\nAfter assigning oj2 to oj1, the value of oj1 is:\n";
    oj1.display();

    return 0;
}