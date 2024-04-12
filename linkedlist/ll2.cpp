#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

Node *convertAll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 0; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    vector<int> a = {2, 5, 8, 6};
    Node *head = convertAll(a);
    cout << head->data;
    return 0;
}

// Consider the vector a = {2, 5, 8, 6}:

// Iteration 1 (i = 0, skipped):
// mover points to the first node (containing 2).
// mover->next also points to the first node (as there's only one node so far).

// Iteration 2 (i = 1):
// A new node with 5 is created (temp).
// mover->next (which points to the first node) is set to temp.
// Now, mover points to the 5 node, and mover->next points to the second node (still containing 2).

// Iteration 3 (i = 2):
// A new node with 8 is created (temp).
// mover->next (which points to the 5 node) is set to temp.
// Now, mover points to the 8 node, and mover->next points to the third node (containing 5).

// Iteration 4 (i = 3):
// A new node with 6 is created (temp).
// mover->next (which points to the 8 node) is set to temp.
// Now, mover points to the 6 node, and mover->next points to nullptr, marking the end of the list.