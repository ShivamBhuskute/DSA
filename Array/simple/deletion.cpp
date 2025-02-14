#include <climits>
#include <iostream>
#include <vector>
using namespace std;

vector<int> f(vector<int> &arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    for (int i = k; i < n; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    f(arr, arr.size(), 2);
    return 0;
}