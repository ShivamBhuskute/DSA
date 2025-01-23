#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

vector<int> moveZero(vector<int> &arr) {
    int end = arr.size() - 1;

    for (int i = 0; i <= end; i++) {
        if (arr[i] == 0) {
            swap(arr[i], arr[end]);
            end--;
        } 
    }
    return arr;
}

int main() {
    vector<int> arr = {1, 0, 0, 0, 1, 1, 1};
    moveZero(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}