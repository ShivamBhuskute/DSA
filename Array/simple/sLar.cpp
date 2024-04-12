#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int sLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            sLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > sLargest)
        {
            sLargest = a[i];
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> smallandlarge(vector<int> a, int n)
{
    int smallest = secondSmallest(a, n);
    int largest = secondLargest(a, n);
    return {smallest, largest};
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> result = smallandlarge(a, n);

    // Access elements separately and print them
    cout << "Second Smallest: " << result[0] << endl;
    cout << "Second Largest: " << result[1] << endl;

    return 0;
}
