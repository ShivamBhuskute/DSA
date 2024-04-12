#include <bits/stdc++.h>
using namespace std;

int maximumDistance(vector<string> &arr)
{
    // Write your code here
    int mx = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            string s1 = arr[i], s2 = arr[j];
            int l1 = s1.length(), l2 = s2.length();
            int c = 0;
            for (int k = 0; k < min(l1, l2); k++)
            {
                if (s1[k] == s2[k])
                    c++;
                else
                    break;
            }
            mx = max(mx, (l1 + l2 - (2 * c)));
        }
    }
    return mx;
}
