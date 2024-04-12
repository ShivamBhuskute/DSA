#include <iostream>
#include <vector>
#include <map>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
            cnt++;
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
            cnt++;
        }
        preSumMap[sum] = i;
    }
    return maxLen;
}

int main()
{
    vector<int> example = {10, 5, 2, 7, 1, 9, 5, 5, 5};
    long long target_sum = 15;
    cout << "Longest subarray length with sum " << target_sum << " is: "
         << longestSubarrayWithSumK(example, target_sum) << endl;
    return 0;
}