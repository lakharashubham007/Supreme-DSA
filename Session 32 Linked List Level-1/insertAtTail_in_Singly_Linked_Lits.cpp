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

void insertAtHead(Node* &head, Node* &tail, int data) {
    // Step 1: Create a new node with the given data
    Node* newNode = new Node(data);
    
    // Step 2: Make the new node's next pointer point to the current head node
    newNode->next = head;
    
    // Step 3: Update the head pointer to point to the new node
    head = newNode;
}

insertAtTail(Node* &head,Node* &tail, int data){
 
  if (head == NULL) { // If the linked list is empty
        Node* newNode = new Node(data); // Create a new node with the given data
        head = newNode; // Set the head pointer to point to the new node
        tail = newNode; // If maintaining a tail pointer, update it to the new node
        return 0; // Exit the function
    }

   //Step1: Create a new node with the given data
   Node* newNode = new Node(data);
   //Step2: Set the next pointer of the current tail node to the new node
   tail->next = newNode;
   //Step3: Update the tail pointer to the new node
   tail = newNode;

}


void print(Node* &head) {
    Node* temp = head; // Create a temporary pointer pointing to the head node
    while (temp != NULL) { // Loop until we reach the end of the linked list
        cout << temp->data << " "; // Print the data value of the current node
        temp = temp->next; // Move to the next node in the linked list
    }
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;
    // insertAtHead(head,tail,200);
    // insertAtHead(head,tail,300);
    // insertAtHead(head,tail,400);
    // insertAtHead(head,tail,500);
     insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    print(head);
    return 0;
}
