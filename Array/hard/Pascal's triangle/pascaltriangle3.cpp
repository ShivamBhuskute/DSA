#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<int> f(int n)
{
    long long res = 1;
    vector<int> ans;
    ans.push_back(1);
    
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / (i);
        ans.push_back(res);
    }
    return ans;
}

vector<vector<int>> pascal(int n) {
    vector<vector<int>> ans;
    for(int i = 1; i <= n; i++) {
        ans.push_back(f(i));
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascal(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}