#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int maxProfit(vector<int> &prices)
{
    // Write your code here.
    int firstbuy = INT_MAX;
    int firstsell = 0;
    int secondbuy = INT_MAX;
    int secondsell = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        firstbuy = min(firstbuy, prices[i]);
        firstsell = max(firstsell, prices[i] - firstbuy);
        secondbuy = min(secondbuy, prices[i] - firstsell);
        secondsell = max(secondsell, prices[i] - secondbuy);
    }
    return secondsell;
}