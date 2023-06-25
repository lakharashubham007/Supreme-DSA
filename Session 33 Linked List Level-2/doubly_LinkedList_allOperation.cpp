#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
//Print Doubly Linked List
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//Insert at head in Doubly Linked List
void insertAtHead(Node* &head, Node* &tail,int data){
   //Check Linked List is empty or not
   if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return; 
   }
   
   //Step1: create new node
   Node* newNode = new Node(data);
   //Step2:
   newNode->next = head;
   //Step3:
   head->prev = newNode;
   //Step4:
   head = newNode; 

}

//Insert at tail in Doubly Linked List
void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //Step1:
    Node* newNode = new Node(data);
    //Step2:
    tail->next = newNode;
    //Step3
    newNode->prev = tail;
    //step4:
    tail = newNode;
}

int getLength(Node* &head){
    Node* temp = head;
    int len = 1;
    while( temp->next != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//Insert in Middle in Doubly Linked List
void insertAtPosition(int position, Node* &head, Node* &tail, int data){
     //insert at 1st position
     if(position == 1){
        insertAtHead(head, tail, data);
        return;
     }
     //insert at last position
     int len = getLength(head);
     if(position>len){
        insertAtTail(head, tail, data);
        return;
     }
     //insert at middle
     int i=1;
     Node* prevNode = head;
     while( i < position-1){
        prevNode = prevNode->next;
        i++;
     }
     Node* curr = prevNode->next;

     //Step1:create new node
     Node* newNode = new Node(data);
     //Step2: previous ki link attach to newNode ke prev and next me 
     prevNode->next = newNode;
     newNode->prev = prevNode;
     //Step3: curr ki link attached to newNode ke prev and next se
     curr->prev = newNode;
     newNode->next = curr;

}

//Deletion in linkedList

void deleteOperation(Node* &head, Node* &tail,int position){
     //1st position delete
     if(position == 1){
        //Step1
        Node* temp = head;
        //Step2
        head = head->next;
        //Step3
        head->prev = NULL;
        //Step4
        temp->next = NULL;
        //Step5
        delete temp;
        return;
     }

     //last elemet deletion
     int len = getLength(head);
     if(position >= len){
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
     }

     //last Element
     int i=1;
     Node* left = head;
     while( i < position-1){
        left  = left->next;
        i++;
     }
     Node* curr = left->next;
     Node* right = curr->next;

     left->next = right;
     right->prev = left;
     curr->prev = NULL;
     curr->next = NULL;
     delete curr;

}

int main(){
    Node* head = new Node(10);
    Node* tail = head;
    
    cout<<"Print original LinkedList: "<<endl;
    print(head);
    cout<<endl;

   //insertion at head 
    cout<<"Insert at Head: "<<endl;
    insertAtHead(head,tail,5);
    insertAtHead(head,tail,1);
    print(head);
    cout<<endl;
    //insertion at last
    cout<<"Last Element Updatad: "<<endl;
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    print(head);
    cout<<endl;
    //insertion in middle
    cout<<"Middle Element insertion: "<<endl;
    insertAtPosition(7,head,tail,50);
    insertAtPosition(6,head,tail,35);
    print(head);
    cout<<endl;
    //deletion linkedList
    cout<<"Deletion successfully: "<<endl;
    deleteOperation(head, tail, 8);
    
    print(head);

    return 0;
}