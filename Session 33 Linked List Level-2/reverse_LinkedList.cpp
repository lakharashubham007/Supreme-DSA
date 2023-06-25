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
//print
void print(Node* &head) {
    Node* temp = head; // Create a temporary pointer pointing to the head node
    while (temp != NULL) { // Loop until we reach the end of the linked list
        cout << temp->data << " "; // Print the data value of the current node
        temp = temp->next; // Move to the next node in the linked list
    }
}

//insert at tail last node
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

// Recursive approach
Node* reverseRecursive(Node* &prev,Node* &curr){
    // Base case
    if(curr == NULL){
        return prev; // New head
    }
    // 1 case solve
    Node* forward = curr->next;
    curr->next = prev;
    // recursive call
    return reverseRecursive(curr,forward);
}

// Loop approach
Node* reverseIterative(Node* &prev , Node* &curr){
    while(curr!=NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    cout<<"Original Linked List: "<<endl;
    print(head);
    cout<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Reverse Linked List: "<<endl;
     Node* prev = NULL;
    Node* curr = head;
    Node* next = curr->next;
    //Node* newHead = reverseRecursive(prev,curr);
    Node* newHead = reverseIterative(prev,curr);
    print(newHead);

    return 0;
}