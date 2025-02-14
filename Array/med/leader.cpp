// Code can be improced by using a max element holder value reducing the lines 
// of the code

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> f(vector<int> &arr, int n, vector<int> &ans)
{

    int max = 0;
    for (int i = n; i > 0; i--)
    {
        if (arr[i - 1] > arr[i] && arr[i - 1] > max)
        {
            max = arr[i - 1];
            ans.push_back(arr[i - 1]);
        }
    }
    return ans;
}

int main()
{
    vector<int> ans;
    vector<int> arr = {148, 162, 85, 18, 107, 32}; // 10, 96, 22, 12, 3, 0, 6
    f(arr, arr.size(), ans);
    // cout << arr[arr.size() - 1];
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}