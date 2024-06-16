#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

bool f(string str1, string str2) {
    if (str1.length() != str2.length()) return false;

    vector<int> ind;

    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] != str2[i]) {
            ind.push_back(i);
        }
    }

    if (ind.size() != 2) return false;

    int ind1 = ind[0];
    int ind2 = ind[1];

    return (str1[ind1] == str2[ind2] && str1[ind2] == str2[ind1]);
}

int main() {
    string s1 = "Shivam";
    string s2 = "Shivmx";

    cout << boolalpha << f(s1, s2);
    return 0;
}
