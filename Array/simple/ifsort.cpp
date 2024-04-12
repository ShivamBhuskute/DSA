#include <iostream>
#include <vector>
using namespace std;
bool isSorted(int n, vector<int> &a)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    vector<int> a(n);
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (isSorted(n, a))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
    return 0;
}