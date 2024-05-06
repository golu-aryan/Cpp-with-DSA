#include <iostream>
#include <vector>
using namespace std;
void inter(vector<int> &arr1, int n, vector<int> &arr2)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << "The Intersection numbers are:";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
};
int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};
    inter(arr1, arr1.size(), arr2);

    return 0;
}