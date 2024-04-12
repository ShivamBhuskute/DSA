#include <iostream>
#include <climits>
#include <vector>
using namespace std;

long long f(vector<int> &a, int n)
{
    long long sum = 0, maxi = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << f(arr, arr.size());
    return 0;
}

// Kadane's Algorithm is a dynamic programming technique used to find the maximum subarray sum within
//  a given array of numbers. 
// Named after its inventor, Jay Kadane, this elegant Algorithm has
//  applications in various domains, from computer science and data analysis to finance and image processing.