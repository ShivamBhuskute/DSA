#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insert_even_at_even(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    Node* curr = head;
    int count = 1;

    while (curr) {
        if (count % 2 == 0) {
            Node* new_node = new Node;
            new_node->data = 2 * count;
            new_node->next = curr->next;
            curr->next = new_node;
        }
        curr = curr->next;
        count++;
    }

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node;
    head->data = 1;
    head->next = new Node;
    head->next->data = 2;
    head->next->next = new Node;
    head->next->next->data = 3;
    head->next->next->next = new Node;
    head->next->next->next->data = 4;
    head->next->next->next->next = new Node;
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = nullptr;

    cout << "Original Linked List: ";
    printList(head);

    head = insert_even_at_even(head);

    cout << "Modified Linked List: ";
    printList(head);

    return 0;
}