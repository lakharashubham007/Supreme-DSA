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

void insertAtHead(Node* &head, int data) {
    if (head == NULL) { // If the linked list is empty
        Node* newNode = new Node(data); // Create a new node with the given data
        head = newNode; // Set the head pointer to point to the new node
        // tail = newNode; // Optional: If maintaining a tail pointer, update it to the new node
        return;
    }
    
    // Step 1: Create a new node with the given data
    Node* newNode = new Node(data);
    
    // Step 2: Make the new node's next pointer point to the current head node
    newNode->next = head;
    
    // Step 3: Update the head pointer to point to the new node
    head = newNode;
}


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
   
    cout<<"Print Linked List:-> "<<endl;
    print(first); // Print the data values of all the nodes starting from the first node
    cout<<endl;

    insertAtHead(first, 80);
    cout<<endl;
    
    cout<<"Print After insert ay Head: ->"<<endl;
    
    print(first);
    cout<<endl;
    
    return 0;
}
