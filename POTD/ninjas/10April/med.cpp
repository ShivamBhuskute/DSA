#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

/*
        Time complexity: O((M ^ 2) * N)
                Space complexity: O(N)

                        Where N, M is the number of rows and columns of the
   matrix MAT.
                        */

// This function will return largest subarray sum using Kadane's algo
int Kadane(vector<int> &maxSumValue)
{
    int maxSoFar = maxSumValue[0];
    int maxEndingHere = maxSumValue[0];

    for (int i = 1; i < maxSumValue.size(); i++)
    {
        // Update value of subarray sum ending at index 'i' and max subarray sum
        // till now
        maxEndingHere = max(maxEndingHere + maxSumValue[i], maxSumValue[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    // Return largest sum
    return maxSoFar;
}

int maxSumSubmatrix(vector<vector<int>> &mat, int n, int m)
{
    // Initialize 'maxSum'
    int maxSum = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        // Array that will store sum of values from column 'i' to  column 'j'
        vector<int> maxSumValues(n);

        for (int j = i; j < m; j++)
        {
            // Add values of current row
            for (int k = 0; k < n; k++)
            {
                maxSumValues[k] += mat[k][j];
            }
            // Using kadane's algorithm find maxSum
            maxSum = max(Kadane(maxSumValues), maxSum);
        }
    }
    // Return maxSum achieved
    return maxSum;
}

// Ninja has been given a matrix ‘MAT’ of integers having size ‘N’ x ‘M’ i.e. N rows and M columns. Ninja has to find the maximum sum submatrix in it. In other words, he has to find the maximum sum over all submatrices in the matrix.
// For example: For the ‘MAT’ given below, the maximum sum submatrix having a sum of 29 is highlighted in red.