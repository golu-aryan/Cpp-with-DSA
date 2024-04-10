#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;

public:
    student(int, char[], double);
    student(student &t) // Copy Constructor
    {
        rno = t.rno;
        strcpy(name, t.name);
        fee = t.fee;
    }
    void display();
};

student ::student(int no, char n[], double f)
{
    rno = no;
    strcpy(name, n);
    fee = f;
}

void student::display(){
    cout << endl << rno << "\t" << name << "\t" << fee;
}
int main()
{
    student s(1222,"Aryan", 20000);
    s.display();
    student r(s);
    r.display();
    return 0;
}