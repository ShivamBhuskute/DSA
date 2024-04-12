#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

vector<long long int> solve(int N, vector<int> &arr, int q, vector<vector<int>> &queries)

{

    vector<long long> ans;

    long long x, r, l;

    long long Q;

    for (int i = 0; i < q; i++)
    {

        Q = queries[i][0];

        if (Q == 2)
        {

            l = queries[i][1];

            r = queries[i][2];

            long long sum = 0;

            if (l >= 0 && r <= N)

                for (int j = l; j <= r; j++)
                {

                    sum += arr[j] * arr[j];
                }

            ans.push_back(sum);
        }
        else if (Q == 0)
        {

            l = queries[i][1];

            r = queries[i][2];

            x = queries[i][3];

            if (l >= 0 && r <= N)

                for (int k = l; k <= r; k++)

                    arr[k] = arr[k] + x;
        }
        else
        {

            l = queries[i][1];

            r = queries[i][2];

            x = queries[i][3];

            if (l >= 0 && r <= N)
                for (int p = l; p <= r; p++)
                {
                    arr[p] = x;
                }
        }
    }

    return ans;
}

int main()
{

    return 0;
}