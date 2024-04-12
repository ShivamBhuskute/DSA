#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

bool isPeriodic(string s) {
    string t = (s + s).substr(1, 2 * s.size() - 2);
    return t.find(s) != -1;
}

int main() {
    string s = "ababaababa";//yzxyzaxyzxyz
    cout << boolalpha << isPeriodic(s);
return 0;
}