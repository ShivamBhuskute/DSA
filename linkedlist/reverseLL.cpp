#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList {
   public:
    Node* head;

    LinkedList() { head = nullptr; }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    Node* reverseList() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        return prev;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.push(5);
    list.push(4);
    list.push(3);
    list.push(2);
    list.push(1);

    cout << "Original List: ";
    list.printList();

    list.head = list.reverseList();

    cout << "Reversed List: ";
    list.printList();

    return 0;
}