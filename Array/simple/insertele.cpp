#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> f(vector<int> &arr, int n, int k, int item)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    arr[n + 1];
    for (int i = n; i >= k; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[k] = item;

    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    f(arr, arr.size(), 2, 55);
    return 0;
}