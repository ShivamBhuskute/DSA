#include <iostream>
using namespace std;
void alpha(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    alpha(n);
    return 0;
}