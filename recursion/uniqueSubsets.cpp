#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

void generateSubsets(vector<int> &nums, int index, vector<int> &current, set<vector<int>> &uniqueSubsets)
{
    // Add the current subset to the set of unique subsets
    uniqueSubsets.insert(current);

    // Generate subsets by including the current element
    for (int i = index; i < nums.size(); ++i)
    {
        current.push_back(nums[i]);
        generateSubsets(nums, i + 1, current, uniqueSubsets);
        current.pop_back(); // Backtrack
    }
}

void printUniqueSubsets(vector<int> &nums)
{
    set<vector<int>> uniqueSubsets;
    vector<int> current;

    // Include the empty subset
    uniqueSubsets.insert(current);

    generateSubsets(nums, 0, current, uniqueSubsets);

    // Print unique subsets
    for (const auto &subset : uniqueSubsets)
    {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i)
        {
            cout << subset[i];
            if (i < subset.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
}

int main()
{
    vector<int> nums = {1, 1, 3};
    cout << "Unique subsets:" << endl;
    printUniqueSubsets(nums);
    return 0;
}
