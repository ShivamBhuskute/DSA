#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// int f(vector<int> &a, int num) {
//     for(int i = 0; i < a.size(); i++) {
//         if(a[i] == num) {
//             return true;
//         }
//     }
//     return false;
// }
// int longest(vector<int> &arr) {
//     int longest = 1;
//     int n = arr.size();
//     for(int i = 0; i < arr.size(); i++) {
//         int x = arr[i];
//         int  cnt = 1;
//         while(f(arr, x + 1) == true) {
//             x++;
//             cnt++;
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;
// }

// int longest(vector<int> &a) {
//     int n = a.size();
//     if(n == 0) return 0;
//     sort(a.begin(), a.end());
//     int lastSmaller = INT_MIN;
//     int cnt = 0;
//     int longest = 1;
//     for(int i = 0; i  < n; i++) {
//         if(a[i] - 1 == lastSmaller) {
//             cnt++;
//             lastSmaller = a[i];
//         } else if(a[i] != lastSmaller) {
//             cnt = 1;
//             lastSmaller = a[i];
//         }
//         longest = max(cnt, longest);
//     }
//     return longest;
// }

int longest(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return 0;

    int longest = 1;
    std::unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    for(auto it: st) {
        if(st.find(it - 1) == st.end()) {
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()) {
                x++;
                cnt++;
            }
        longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4, 5, 99, 100, 101, 102, 103, 104, 105};
    int ans = longest(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
    return 0;
}