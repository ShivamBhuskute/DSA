#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution
{
private:
    void f(int index, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (nums.size() == index)
        {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            f(index + 1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> nums)
    {
        vector<vector<int>> ans;
        f(0, nums, ans);
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums{1, 2, 3};
    vector<vector<int>> ans = obj.permute(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}