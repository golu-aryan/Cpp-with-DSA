#include <iostream>
using namespace std;

void demoFunction() {
    static int count = 0; // Static variable initialization
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    demoFunction(); // Output: Count: 1
    demoFunction(); // Output: Count: 2
    demoFunction(); // Output: Count: 3
    return 0;
}
