#include<bits/stdc++.h>
using namespace std;

// string f(vector<int> &arr, int n, int t)
// {
//     int left = 0, right = n - 1;
//     sort(arr.begin(), arr.end());
//     while(left < right)
//     {
//         int sum = arr[left] + arr[right];
//         if(sum == t)
//         {
//             return "YES";
//         }
//         else if(sum > t)
//         {
//             right--;
//         }
//         else{
//             left++;
//         }
//     }
//     return "NO";
// }

//string f(vector<int> &a, int n, int t)
// {
//     for(int i = 0 ; i < n; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(a[i] + a[j] == t)
//             {
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }

string f(vector<int> &a, int n, int t)
{
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++)
    {
        int num = a[i];
        int need = t - num;
        if(mpp.find(need) != mpp.end())
        {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main(){
    vector<int> arr = {5, 6, 7, 8, 2, 4};
    int target = 13;
    cout << f(arr, arr.size(), target);
return 0;
}

