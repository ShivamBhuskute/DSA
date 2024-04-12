#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;

void leftRotate(int arr[], int n, int d)
{

    if (n == 0)
        return;

    // Get the effective number of rotations:
    d = d % n;

    // step 1:
    reverse(arr, arr + n - d);

    // step 2:
    reverse(arr + n - d, arr + n);

    // step 3:
    reverse(arr, arr + n);
}

int main() {
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int d = 2;

    cout << "Before rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After rotation:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
return 0;
}