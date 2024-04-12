#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int kDistinctChars(int k, string &str)
{
    // Write your code here

    if (k == 0)
        return 0;

    unordered_map<char, int> mpp;
    int maxL = 0;
    int left = 0, right = 0;

    while (right < str.length())
    {
        mpp[str[right]]++;

        while (mpp.size() > k)
        {
            mpp[str[left]]--;
            if (mpp[str[left]] == 0)
            {
                mpp.erase(str[left]);
            }
            left++;
        }
        maxL = max(maxL, right - left + 1);
        right++;
    }
    return maxL;
}

//brute
int kDistinctChars(string &str, int k) {
    int max_length = 0;
    for (int i = 0; i < str.length(); i++) {
        unordered_set<char> char_set;
        for (int j = i; j < str.length(); j++) {
            char_set.insert(str[j]);
            if (char_set.size() <= k) {
                max_length = max(max_length, j - i + 1);
            } else {
                break;
            }
        }
    }
    return max_length;
}

int main()
{

    return 0;
}