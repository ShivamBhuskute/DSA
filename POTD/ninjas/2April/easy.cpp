#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string findDivision(int x, int y, int n) {
    // Write your code here.
    string res;
    if ((x < 0 || y < 0) && (x > 0 || y > 0)) {
        res += '-';
    }
    res += to_string(abs(x) / abs(y));
    res += '.';
    int rem = abs(x) % abs(y);
    for (int i = 0; i < n; i++) {
        rem = rem * 10;
        int d = rem / abs(y);
        rem = rem % abs(y);
        res += to_string(d);
    }
    return res;
}