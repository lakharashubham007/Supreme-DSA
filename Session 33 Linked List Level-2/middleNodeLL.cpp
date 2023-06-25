#include <iostream>
using namespace std;

class Node{
  public:
     int data;
     Node* next;

     Node(int data){
      this->data = data;
      this->next = NULL;
     }
     
};

void print(Node* &head){
    //temp variable bna kar head pe rakhna hai
    Node* temp = head;

    while(temp != NULL){
      cout<<temp->data<<" ";
      temp = temp->next;
    }
   cout<<endl;
}


Node* getMiddle(Node* &head){
    // If empty linked list
    if(head == NULL){
        cout<<"Linked List is empty";
        return head;
    }
    // Only one node in the linked list
    if(head -> next == NULL){
        return head;
    }
    Node* slow = head;
    //Node* fast = head; //for answer 40
    Node* fast = head->next; //for answer 30 // n/2 + 1 will be the answer
    // Node* fast = head->next;  // If we want n/2 as the answer
    // slow and fast are valid
    while(slow!=NULL && fast!=NULL){
        fast = fast->next; // move 1 step
        if(fast!=NULL){ // check if fast becomes null
            fast = fast->next; // if not null, then simply move 1 step more and hence in total 2 steps
            slow = slow->next; // move 1 step
        }
    }
    return slow; // return slow which will be the middle node
}

int main() {
  //object creation head naam ka
  Node* head = new Node(10);
  //object second head naam ka
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);
  Node* fivth = new Node(50);
  Node* sixth = new Node(60);

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth-> next = fivth;
  fivth-> next = sixth;
  sixth-> next = NULL;

  print(head);

  cout<<"Middle Node is: "<<getMiddle(head)->data<<endl;

  return 0;
}