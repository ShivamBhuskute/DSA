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
    if (index < nums.size())
    {
        current.push_back(nums[index]);
        generateSubsets(nums, index + 1, current, uniqueSubsets);
        current.pop_back(); // Backtrack
        generateSubsets(nums, index + 1, current, uniqueSubsets);
    }
}
void printUniqueSubsets(vector<int> &nums)
{
    set<vector<int>> uniqueSubsets;
    vector<int> current;

    // Include the empty subset
    // uniqueSubsets.insert(current);

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
    vector<int> nums = {1, 2, 2};
    cout << "Unique subsets:" << endl;
    printUniqueSubsets(nums);
    return 0;
}
