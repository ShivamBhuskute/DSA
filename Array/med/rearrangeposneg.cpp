#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> f(vector<int> &a)
{
    int n = a.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            ans[neg] = a[i];
            neg += 2;
        }
        else
        {
            ans[pos] = a[i];
            pos += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5};
    f(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}