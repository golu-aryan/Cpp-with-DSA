#include<iostream>
using namespace std;
int printArray(int arr[], int size){
    for(int i =0;i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout << "Printing Done"<<endl;
}
int main()
{
    int n[10] = {13,13,1,2,5};
    printArray(n,4);

    return 0;
}