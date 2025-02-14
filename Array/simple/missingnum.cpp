#include <bits/stdc++.h>
using namespace std;
/*int missing(vector<int> &a, int n)

{
    int hash[n + 1] = {0};

    for (int i = 0; i < n - 1; i++)
    {
        hash[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
}*/

/*int missing(vector<int> &a, int N)
{

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++)
    {
        xor2 = xor2 ^ a[i];    // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; // XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}*/

int missing(vector<int> &a, int n) {
    int sum = (n * (n + 1)) / 2;
    int arrsum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrsum += a[i];
    }

    return (sum - arrsum);
}
int main() {
    int n = 5;
    vector<int> a = {1, 3, 4, 5};
    int ans = missing(a, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}