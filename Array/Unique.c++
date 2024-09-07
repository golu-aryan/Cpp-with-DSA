#include<iostream>
using namespace std;
int findUnique(int arr[], int size){
    int ans = 0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {1,5,2,4,1,5,2,3,3};        //Output is 4
    cout << findUnique(arr,9);
    return 0;
}