#include <iostream>
using namespace std;
void tri(int n)
{
    int  num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    tri(n);
    return 0;
}