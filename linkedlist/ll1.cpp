#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    Node *y = new Node(arr[0]);
    cout << y->data;
    cout << y->next;
    return 0;
}