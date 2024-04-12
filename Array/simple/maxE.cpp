#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Max(vector<int> arr, int n)
{
    return *max_element(arr.begin(), arr.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << Max(arr, n);
    return 0;
}