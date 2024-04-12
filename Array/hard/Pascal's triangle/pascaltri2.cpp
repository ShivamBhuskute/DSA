#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// for nth row
void f(int n)
{
    long long res = 1;
    cout << res << " ";
    for (int i = 1; i < n; i++)
    {
        res = res * (n - i);
        res = res / (i);
        cout << res << " ";
    }
    cout << "\n";
}

int main()
{

    int n = 1;
    f(n);
    return 0;
}