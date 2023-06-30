#include<iostream>
using namespace std;

class LsitNode{
 public:
 int data;
 ListNode* next;

 ListNode(){
    this->data = 0;
    this->next = NULL;
 }

 ListNode(int data){
    this->data = data;
    this->next = NULL;
 }
 
};

int main(){
    LsitNode* head = new LsitNode(10);
   
    return 0;
}