#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solu {
   public:
    vector<int> func(vector<int> &arr, int target) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];

            if (mpp.find(complement) != mpp.end()) {
                return {mpp[complement], i};
            }

            mpp[arr[i]] = i;
        }
        return {};
    }
};

int main() {
    Solu s;
    vector<int> arr = { 11, 8, 1, 15};
    int target = 9;

    vector<int> result = s.func(arr, target);

    if (result.size() == 2) {
        cout << result[0] << " " << result[1];
    } else {
        cout << "Not found";
    }

    return 0;
}