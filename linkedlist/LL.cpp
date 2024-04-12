#include <iostream>
#include <vector>
#include <climits>
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

Node *convert(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size();i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int check(Node* head, int val) {
    Node* temp = head;
    while(temp) {
        if(temp -> data == val) {
            return 1;
        }
        temp = temp-> next;
    }
    return 0;
}



int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *head = convert(arr);
    cout << lengthOfLL(head) << "\n";
    cout << check(head, 3);
    return 0;
}