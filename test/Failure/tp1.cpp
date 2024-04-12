#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int k = 0; k < 5 - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << '#';
            if (j == (2 * i) / 2)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}