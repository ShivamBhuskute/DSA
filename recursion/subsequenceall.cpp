#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// printing every subsequence with given sum
void f(int ind, vector<int> &ds, int s, int sum, int arr[], int n, int k)
{
    if (ind == n)
    {
        if (sum == s )
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        return;
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    f(ind + 1, ds, s, sum, arr, n, k);

    s -= arr[ind];
    ds.pop_back();
    f(ind + 1, ds, s, sum, arr, n, k);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int k = 3;
    int sum = 2;
    vector<int> ds;
    f(0, ds, 0, sum, arr, n, k);
    return 0;
}