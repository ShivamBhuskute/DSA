#include <climits>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// bool f(string s)
// {
//     // code here
//     map<char, int> mpp;
//     for (int i = 0; i < s.size(); i++)
//     {
//         mpp[s[i]]++;
//     }
//     for (auto it : mpp)
//     {

//     }
// }

int main() {
    string s = "xyyz";
    map<char, int> mpp;
    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }
    for (auto it : mpp) {
        if (it.second > 0) cout << it.second << "\n";
    }
    return 0;
}