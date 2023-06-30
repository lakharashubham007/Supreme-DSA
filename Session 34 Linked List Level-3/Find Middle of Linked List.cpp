#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        this->data = 0;
        this->next = NULL;
    }

    // Parameterized constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Function to get the middle node of the linked list
Node* getMiddle(Node* &head) {

    // If the head is NULL, the list is empty
    if (head == NULL) {
        return head;
    }

    // If the head has no next node, it is the only node in the list
    if (head->next == NULL) {
        return head;
    }

    Node* slow = head; // Slow pointer moves one node at a time
    Node* fast = head; // Fast pointer moves two nodes at a time

    // Move the pointers until the fast pointer reaches the end of the list
    while (slow != NULL && fast != NULL) {
        fast = fast->next; // Move fast pointer one step
        if (fast != NULL) {
            fast = fast->next; // Move fast pointer another step
            slow = slow->next; // Move slow pointer one step
        }
    }

    return slow; // Return the slow pointer, which points to the middle node
}

int main() {

    // Create nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Connect nodes to form a linked list
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Print the linked list
    print(head);
    cout << endl;

    // Get the middle node and print its data
    cout << "Middle Node is: " << getMiddle(head)->data << endl;

    return 0;
}
