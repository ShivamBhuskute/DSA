#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <map>
using namespace std;

vector<int> f(vector<int> arr)
{
    vector<int> ans;
    map<int, int> mpp;
    int n = arr.size();
    int n1 = int(n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;

        if (mpp[arr[i]] == n1)
        {
            ans.push_back(arr[i]);
        }
        if (ans.size() == 2)
            break;
    }
    return ans;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = f(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}