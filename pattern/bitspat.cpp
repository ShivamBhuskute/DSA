#include <iostream>
using namespace std;
void nBinaryTriangle(int n)
{
    // Write your code here.
    int stars = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
            stars = 1;
        else
            stars = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << stars << " ";
            stars = 1 - stars;
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    nBinaryTriangle(n);
    return 0;
}