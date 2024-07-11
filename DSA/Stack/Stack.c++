#include<iostream>
#include<stack>

using namespace std;

int main(){

    //Creation of stack
    stack<int> s;
    //Push operation 
    s.push(2);
    s.push(3);
    //pop operation 
    s.pop();
    cout << "Printing top element" << s.top() << endl;

    if(s.empty()){
        cout <<"Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    
    return 0;
}