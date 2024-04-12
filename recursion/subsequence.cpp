#include <iostream>
#include <vector>
#include <climits>
using namespace std;
//every subsequence including empty subsequence
void f(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << "\n";
        return;
    }
    // Include the current element
    ds.push_back(arr[ind]);
    f(ind + 1, ds, arr, n);
    ds.pop_back();

    // Exclude the current element
    f(ind + 1, ds, arr, n);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    f(0, ds, arr, n);
    return 0;
}
