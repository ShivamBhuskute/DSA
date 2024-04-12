#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{

    // size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el;      // Element

    // applying the algorithm:
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i])
            cnt++;
        else
            cnt--;
    }

    // checking if the stored element
    //  is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == el)
            cnt1++;
    }

    if (cnt1 > (n / 2))
        return el;
    return -1;
}

// int f(vector<int> &a)
// {
//     unordered_map<int, int> mpp;
//     for(int i = 0 ; i < a.size(); i++)
//     {
//         mpp[a[i]]++;
//     }
//     for(auto it: mpp)
//     {
//         if(it.second > (a.size() / 2))
//         {
//             return it.first;
//         }
//     }
//     return -1;
// }

// int f(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < a.size(); j++)
//         {
//             if (a[i] == a[j])
//             {
//                 cnt++;
//             }
//         }
//         if (cnt > (a.size() / 2))
//             return a[i];
//     }
//     return -1;
// }

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 1, 3};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}