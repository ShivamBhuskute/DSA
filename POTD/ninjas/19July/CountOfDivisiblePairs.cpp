#include <iostream>
#include <vector>
using namespace std;

int f(int n, int m) {
    vector<int> rem_x(5, 0);
    vector<int> rem_y(5, 0);

    // Count remainders for numbers 1 to n
    for (int i = 1; i <= n; i++) {
        rem_x[i % 5]++;
    }

    // Count remainders for numbers 1 to m
    for (int i = 1; i <= m; i++) {
        rem_y[i % 5]++;
    }

    // Calculate the number of pairs
    int cnt = (rem_x[0] * rem_y[0] + rem_x[1] * rem_y[4] + rem_x[2] * rem_y[3] +
               rem_x[3] * rem_y[2] + rem_x[4] * rem_y[1]);
    return cnt;
}

int main() {
    int n = 3, m = 5;
    cout << f(n, m) << endl;  // Expected output: 3
    return 0;
}
