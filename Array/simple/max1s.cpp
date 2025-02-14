#include <bits/stdc++.h>
using namespace std;
int maxone(vector<int> &a) {
    int cnt = 0;
    int m = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            cnt++;
        } else {
            cnt = 0;
        }
        m = max(m, cnt);
    }
    return m;
}
int main() {
    vector<int> a = {1, 1, 0, 0, 1, 1, 1};
    cout << maxone(a);
    return 0;
}