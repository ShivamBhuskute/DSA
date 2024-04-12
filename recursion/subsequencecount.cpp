#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// counting subsequences with given sum
int f(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (sum == s)
        {
            return 1;
        }
        else return 0;
    }

    s += arr[ind];
    int l = f(ind + 1, s, sum, arr, n);

    s -= arr[ind];

    int r = f(ind + 1, s, sum, arr, n);

    return l + r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    cout << f(0, 0, sum, arr, n);
    return 0;
}