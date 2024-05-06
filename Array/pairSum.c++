#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for sort
using namespace std;

vector<vector<int>> pairSum(const vector<int> &arr, int s) // Change return type to vector<vector<int>>
{
    vector<vector<int>> ans;

    for (size_t i = 0; i < arr.size(); i++) // Use size_t for better compatibility and efficiency
    {
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                ans.push_back({min(arr[i], arr[j]), max(arr[i], arr[j])}); // Initialize vector directly
            }
        }
    }
    sort(ans.begin(), ans.end()); // Sort the result

    return ans; // Return the result
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int targetSum = 5;
    vector<vector<int>> result = pairSum(arr, targetSum); // Store the result
    for (const auto &pair : result) // Print the result
    {
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}
