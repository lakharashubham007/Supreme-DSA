#include <iostream>
using namespace std;

class Node {
public:
    int data; // The data value stored in the node
    Node* next; // Pointer to the next node in the linked list

    Node() {
        this->data = 0; // Initialize data to 0
        this->next = NULL; // Initialize next pointer to NULL
    }

    Node(int data) {
        this->data = data; // Initialize data with the provided value
        this->next = NULL; // Initialize next pointer to NULL
    }
};

void print(Node* &head) {
    Node* temp = head; // Create a temporary pointer pointing to the head node
    while (temp != NULL) { // Loop until we reach the end of the linked list
        cout << temp->data << " "; // Print the data value of the current node
        temp = temp->next; // Move to the next node in the linked list
    }
}

int main() {
    Node* first = new Node(10); // Create the first node with data value 10
    Node* second = new Node(20); // Create the second node with data value 20
    Node* third = new Node(30); // Create the third node with data value 30

    first->next = second; // Link the first node to the second node
    second->next = third; // Link the second node to the third node
    //third->next = NULL; // Optional: Link the third node to NULL (end of the linked list)

    print(first); // Print the data values of all the nodes starting from the first node

    return 0;
}
