#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// printing all subsets with given sum // no order
bool f(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (sum == s)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << "\n";
            return true;
        }
        else
            return false; 
    }

    ds.push_back(arr[ind]);
    s += arr[ind];

    if (f(ind + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }

    s -= arr[ind];
    ds.pop_back();

    if (f(ind + 1, ds, s, sum, arr, n) == true)
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    f(0, ds, 0, sum, arr, n);
    return 0;
}