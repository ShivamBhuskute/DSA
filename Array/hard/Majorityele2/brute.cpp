#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<int> f(vector<int> arr)
{
    int n = arr.size();
    int n1 = floor(arr.size() / 3);
    vector<int> ans;
    int cnt;
    for (int i = 0; i < n; i++)
    {
        if (ans.size() == 0 || ans[0] != arr[i])
        {
            cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    cnt++;
                }
            }
            if (cnt > n1)
            {
                ans.push_back(arr[i]);
            }
        }
        if(ans.size() == 2) break;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3};
    vector<int> ans = f(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}