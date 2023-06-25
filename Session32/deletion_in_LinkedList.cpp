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

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data,int position,Node* &head,Node* &tail){
    // Empty linked list
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if(position == 0){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    cout<<len<<endl;
    if(len == position){
        insertAtTail(head,tail,data);
        return;
    }
    // step1 : find the position of prev and curr
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    // step2 : 
    Node* newNode = new Node(data);
    // step3 :
    newNode -> next = curr;
    // step4 :
    prev->next = newNode;
}

void deleteNode(int position, Node* &head, Node* &tail){

    if(head == NULL){
        cout<<"LL is empty";
        return;
    }

    //First node delete
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    //Last Node Delete
    int len = findLength(head);
    if(position == len){
        //Step1:
        int i=1;
        Node* prev = head;
        while(i<position-1){
            prev = prev->next;
            i++;
        }
        //Step2:
        prev->next = NULL;
        //Step3:
        Node* temp = tail;
        //Step4:
        tail = prev;
        //Step5:
        delete temp;
        return;
    }

    //Middle Delete
    int i=1;
     Node* prev = head;
     while(i< position-1){
        prev = prev->next;
        i++;
     }
     Node* curr = prev->next;
     //Step2:
     prev->next = curr->next;
     //Step3:
     curr->next = NULL;
     //Step4:
     delete curr;
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
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    print(head);
    cout<<endl;
    insertAtPosition(101,0,head,tail);
    print(head);
    cout<<endl; 
    deleteNode(6,head,tail);
    print(head);
    return 0;
}