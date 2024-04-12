#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int i = 0, j = 0;
    vector<int> Union;
    int n1 = a.size();
    int n2 = b.size();
    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j])
        {
            if(Union.size() == 0 || Union.back() != a[i])
            {
                Union.push_back(a[i]);
            }
            i++;
        }
        else{
            if(Union.size() == 0 || Union.back() != b[j])
            {
                Union.push_back(b[j]);
            }
            j++;
        }
    }
    //if elements remain in array 1
    while(i < n1)
    {
        if(Union.size() == 0 || Union.back() != a[i])
        {
            Union.push_back(a[i]);
        }
        i++;
    }

    //if elements remain the the 2nd array
    while(j < n2)
    {
        if(Union.size() == 0 || Union.back() != b[j])
        {
            Union.push_back(b[j]);
        }
        j++;
    }
    
    return Union;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    vector<int> arr = sortedArray(a, b);
    for(auto & val: arr)
    {
        cout << val << " ";
    }
return 0;
}