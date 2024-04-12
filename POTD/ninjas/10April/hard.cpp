#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
/*
    Time Complexity: O(N * N * len)
        Space Complexity: O(1)

            where 'N' is the number of names in the list
                and 'len' is the average length of names in the list.
                */

bool isSimilar(string &name1, string &name2)
{
    int n = min(name1.length(), name2.length());

    // Run a loop to check if all lettrs are same.
    for (int i = 0; i < n; i++)
    {
        if (name1[i] != name2[i])
            return false;
    }

    return true;
}

string findSimilar(vector<string> &A)
{
    int n = A.size();

    // Run nested loops to find all possible pairs.
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // Check if both names/strings are similar.
            if (isSimilar(A[j], A[i]))
            {
                return A[i];
            }
        }
    }

    // If no similarity is found.
    return "not found";
}

// Being a class monitor, you have a list of names of your class students. Your task is to find the first name from the list, which is similar to any other name occurring before it in the list.

// Two names, name1 and name2, are similar if at least one of the following conditions holds.

// Both names are identical.
// name1 is a prefix of name2.
// name2 is a prefix of name1.
// Print the first name from the list, which is similar to any other name present in the prefix part of the list. If no such name is found, print “not found”.