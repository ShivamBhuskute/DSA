// return the size of the array containing the unique elements
#include <bits/stdc++.h>
// #include <vector>
using namespace std;

int duplicate(vector<int> &a) {// brute 
    set<int> st;
    for (int i = 0; i < a.size(); i++) {
        st.insert(a[i]);
    }

    // int index  = 0;
    // for(auto it: st) {
    //     a[index] = it;
    //     index++;
    // }
    return st.size();
}

// int duplicate(vector<int> &a, int n)
// {
//     int i = 0;
//     for (int j = 1; j < n; j++)
//     {
//         if (a[i] != a[j])
//         {
//             i++;
//             a[i] = a[j];
//         }
//     }
//     return i + 1;
// }
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << duplicate(a);
    return 0;
}