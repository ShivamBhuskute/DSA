#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    int cnt = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
            cnt++;
        }
        right++;
        if (right < n)
        {
            sum += a[right];
        }
    }
    return cnt;
}

int main()
{
    vector<int> a = {10, 5, 2, 7, 1, 9, 5, 5, 5};
    long long target = 15;
    cout << longestSubarrayWithSumK(a, target);
}