#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    string s = "";
    double num = 1.0;
    // cout << s + (char)num;
    // cout << num - floor(num);
    // cout << num - floor(int(num));
    // vector<int> ans = {1, 2, 3, 4, 5, 5};
    // set<int> st(ans.begin(), ans.end());
    // for(auto it: st) {
    //     cout << it << " ";
    // }
    vector<int> ans;

    // vector<vector<int>> mat(5, vector<int>(5));
    // for (int i = 0; i < mat.size(); i++)
    // {
    //     /* code */
    //     for (int j = 0; j < mat[i].size(); j++)
    //     {
    //         cin >> mat[i][j];
    //     }
    // }
    // for (int i = 0; i < mat.size(); i++)
    // {
    //     /* code */
    //     for (int j = 0; j < mat[i].size(); j++)
    //     {
    //         ans.push_back(mat[i][j]);
    //         // a = ans.size();
    //     }
    //     if(i % 2 != 0)
    //     reverse(ans.begin() + mat[i - 1].size(), ans.end());
    // }
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    vector<int> arr = {1, 2, 3, 4};
    int a = arr[arr.size() - 1] + 1;
    arr[arr.size() - 1] = a;
    cout << arr[arr.size() - 1];

    return 0;
}