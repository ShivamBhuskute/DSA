#include <iostream>
#include <vector>
#include <algorithm>

int highwayBillboard(std::vector<int> &billboards, std::vector<int> &revenue, int m, int x)
{
    int n = billboards.size();
    std::vector<int> dp(n + 1, 0);
    int prev = 0;

    for (int i = 1; i <= n; ++i)
    {
        dp[i] = std::max(dp[i], dp[i - 1]);
        while (billboards[i - 1] - billboards[prev] > x)
        {
            prev++;
        }
        dp[i] = std::max(dp[i], dp[prev] + revenue[i - 1]);
    }

    return dp[n];
}