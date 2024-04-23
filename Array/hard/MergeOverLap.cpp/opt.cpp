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
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || ans.back()[1] < arr[i][0])
            ans.push_back(arr[i]);
        else
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
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
    return 0;
}