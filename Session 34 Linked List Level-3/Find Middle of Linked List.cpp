#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
 
   Node(){
    this -> data = 0;
    this -> next = NULL;
   }

   Node(int data){
    this -> data = data;
    this -> next = NULL;
   }

};
//Print LL
void print(Node* &head){
    Node* temp = head;
    while( temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* getMiddle(Node* &head){

    if(head == NULL){
        return head;
    }

     if(head->next == NULL){
        return head;
    }
   
   Node* slow = head;
   Node* fast = head;
   
   while(slow!= NULL && fast != NULL){
    fast = fast->next;
    if(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
   }
   return slow;
}


int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    
    head->next = second;
    second->next = third;
    third->next = fourth; 
     
    print(head);
    
    cout<<endl;

    cout<<"Middle Node is: "<<getMiddle(head)->data<<endl;

    return 0;
}