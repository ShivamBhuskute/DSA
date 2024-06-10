#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

string f(int n)
{
    string s;
    for (int door_id = 1; door_id <= n; door_id++)
    {
        if (pow(int(sqrt(door_id)), 2) == 1)
        {
            s += '1';
        }
        else
            s += '0';
    }
    return s;
}

int main()
{
    int n = 4;
    cout << f(n);
    
    return 0;
}