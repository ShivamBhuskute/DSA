#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int piv(vector<int> &arr, int left, int right)
{
    int pivot = arr[right];
    int i = left;
    for (int j = left; j < right; ++j)
    {
        if (arr[j] <= pivot)
        {
            std::swap(arr[i], arr[j]);
            ++i;
        }
    }
    std::swap(arr[i], arr[right]);
    return i;
}

int quickSelect(vector<int> &arr, int left, int right, int K)
{
    if (left == right)
    {
        return arr[left];
    }

    int pivot = piv(arr, left, right);

    if (K == pivot)
    {
        return arr[K];
    }
    else if (K < pivot)
    {
        return quickSelect(arr, left, pivot - 1, K);
    }
    else
    {
        return quickSelect(arr, pivot + 1, right, K);
    }
}

vector<int> kthElement(vector<int> &arr, int n, int K)
{
    vector<int> ans;
    int small = quickSelect(arr, 0, n - 1, K - 1);
    int largest = quickSelect(arr, 0, n - 1, n - K);

    ans.push_back(small);
    ans.push_back(largest);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 5, 4};
    int K = 3;
    vector<int> ans = kthElement(arr, arr.size(), K);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}