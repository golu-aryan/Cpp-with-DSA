#include<iostream>
using namespace std;

int main() 
{
    int a[3][3], i ,j;

    cout << "Enter 3*3 matrix element:";
    for(i = 0; i< 3; i++){
        for(j = 0; j<3; j++){
            cin >> a[i][j];
        }
        cout << endl;
    }


    cout << "Matrix of 3*3 are :" << endl;
    
    for(i = 0; i< 3; i++){
        for(j = 0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    cout << "Lower triangle:" << endl;
     for(i = 0; i< 3; i++){
        for(j = 0; j<3; j++){
            if(i>=j){
                cout << a[i][j] << " ";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << "Upper triangle:" << endl;
     for(i = 0; i< 3; i++){
        for(j = 0; j<3; j++){
            if(i<=j){
                cout << a[i][j];
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}