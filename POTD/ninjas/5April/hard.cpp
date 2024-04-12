#include <bits/stdc++.h>
using namespace std;

bool crossRiver(vector<int> &stones)
{
    unordered_set<int> pos;
    for (auto it : stones)
        pos.insert(it);

    unordered_map<int, unordered_set<int>> mp;

    mp[0].insert(0);

    for (auto it : stones)
    {
        for (auto i : mp[it])
        {
            if (pos.find(it + i) != pos.end() && i != 0)
                mp[it + i].insert(i);
            if (pos.find(it + i + 1) != pos.end() && i != -1)
                mp[it + i + 1].insert(i + 1);
            if (pos.find(it + i - 1) != pos.end() && i != 1)
                mp[it + i - 1].insert(i - 1);
        }
    }
    return mp[stones.back()].size() != 0;
}

int main() {
    return 0;
}