#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main()
{
    string s = "";
    double num = 1.0;
    // cout << s + (char)num;
    // cout << num - floor(num);
    cout << num - floor(int(num));
    return 0;
}