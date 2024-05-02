#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    // new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next; // tail = temp;
}

void insertAtPosition(Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d); 

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
    cout << cnt;
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

int main()
{
    Node *node1 = new Node(10);
    // cout << node1 -> data << "\n";
    // cout << node1 -> next;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 15);
    insertAtHead(head, 12);
    // insertAtTail(tail, 12);
    // insertAtTail(tail, 15);

    // print(head);

    // insertAtPosition(head, 3, 45);

    print(head);

    return 0;
}