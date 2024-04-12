#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
using namespace std;

vector<vector<int>> f(int n, vector<int> &arr)
{
    set<vector<int>> st;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == 0)
            {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                st.insert(temp);
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                    j++;

                while (j < k && arr[j] == arr[k + 1])
                    k--;
            }
            else if (sum > 0)
                k--;
            else
                j++;
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = f(n, arr);
    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}