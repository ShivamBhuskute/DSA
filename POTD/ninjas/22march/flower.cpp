#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int ninjaGarden(vector<int> &flowers, int n, int k)
{
    vector<int> dayOfFlowerBloomed(n + 1);
    for (int i = 0; i < n; i++)
    {
        dayOfFlowerBloomed[flowers[i]] = i + 1;
    }
    int ans = n + 2;
    n = n + 1;
    for (int i = 1; i + k + 1 < n; i++)
    {
        int left = dayOfFlowerBloomed[i];
        int right = dayOfFlowerBloomed[i + k + 1];
        int max1 = max(left, right);
        bool done = true;

        for (int j = i + 1; j <= i + k; j++)
        {
            if (dayOfFlowerBloomed[j] < max1)
            {
                done = false;
                break;
            }
        }

        if (done == true)
        {
            if (max1 < ans)
            {
                ans = max1;
            }
        }
    }
    if (ans == n + 1)
    {
        return -1;
    }

    else
    {
        return ans;
    }
}

int main()
{

    return 0;
}