#include <iostream>
using namespace std;
void pat(int n)
{
    for (int i = 1; i <= n; i++)
    {
        //numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }

        //space
        for(int k = 1; k <= 2*(n-i); k++)
        {
            cout << " ";
        }

        //rev numbers
        for(int j = i; j >= 1; j--)
        {
            cout << j ;
        }
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    pat(n);
    return 0;
}