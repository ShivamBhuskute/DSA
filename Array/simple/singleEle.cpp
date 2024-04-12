#include <bits/stdc++.h>
using namespace std;
int missing(vector<int> &arr)
{
    int n = arr.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
    //     for(int i=1;i<arr.size();i=i+2){
    // 	if(arr[i]!=arr[i-1]){
    // 		return arr[i-1];
    // 	}
    // }
    // return arr[arr.size()-1];
}
int main()
{
    vector<int> a = {4, 4, 1, 1, 6, 2, 2};
    cout << missing(a);
    return 0;
}