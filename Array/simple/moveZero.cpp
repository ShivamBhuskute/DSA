#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZero(int n, vector<int> &a) {
    int j = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    if (j == -1) return a;

    for (int i = j + 1; i < n; i++)  // ans = 1 1 1 0 0
    {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
}
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    // 1 0 1 0 1
    // 1 1 0 0 1
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    moveZero(n, a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}