#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node( int data ){
        this->data = data;
        this->next = NULL;
    }

};

bool checkloop(Node* &head){
    
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        //loop is detected
        if(slow == fast){
            return true;
        }
    }
    return false;
}


int main(){
 Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);
    Node* sixth = new Node(70);
    Node* seventh = new Node(80);
    Node* eigth = new Node(90);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = fourth;

    if(checkloop(head)){
        cout<<"Loop is present";
    }
    else{
        cout<<"Loop is absent";
    }

    return 0;
}