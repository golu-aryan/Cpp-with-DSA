#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;

    for(int i = 0; i<b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int x,y;

    cout << "Enter number and its power:"<<endl;
    cin >> x >> y;

    int res = power(x,y);
    cout << "The number is = " << res;

    return 0;
}