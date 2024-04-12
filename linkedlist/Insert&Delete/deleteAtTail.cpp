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
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

Node *removeAtTail(Node *head)
{
    if (head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp -> next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *head = convert(arr);
    
    head = removeAtTail(head);
    print(head);
    return 0;
}