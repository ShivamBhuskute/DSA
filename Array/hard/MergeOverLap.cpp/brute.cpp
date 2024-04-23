#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

vector<vector<int>> f(vector<vector<int>> arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int start = arr[i][0];
        int end = arr[i][1];
        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j][0] <= end)
            {
                end = max(end, arr[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans; 
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {8, 9}, {8, 10}, {2, 6}, {15, 18}, {9, 11}, {2, 4}, {13, 18}, {16, 17}};
    vector<vector<int>> ans = f(arr);
    cout << "The merged intervals are: "
         << "\n";
    for (auto it : ans)
    {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    // cout << ans.back()[0];
    return 0;
}