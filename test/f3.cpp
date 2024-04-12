#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <string>
using namespace std;

bool f(int n)
{
    string s = to_string(n);

    for (int c = 0; c < s.length(); c++)
    {
        if (s[c] == 2 || s[c] == 3 || s[c] == 4 || s[c] == 5 || s[c] == 7)
        {
            return false;
        }
    }
    return true;
}

int strangeNumbers(int n)
{
    // Write your code here
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (f(i))
            cnt++;
    }
    return cnt;
}

int main() {
    int N = 16;
    int strange_numbers = strangeNumbers(N); // Corrected function call
    std::cout << "Number of strange numbers from 1 to " << N << ": " << strange_numbers << std::endl;
    return 0;
}
