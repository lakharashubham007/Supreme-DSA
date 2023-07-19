#include <iostream>
using namespace std;


class Stack {
   public:
   int* arr;  // Array to store stack elements
   int top1;  // Top index for the first stack
   int top2;  // Top index for the second stack
   int size;  // Maximum size of the stack


   Stack(int size){
    arr = new int[size];  // Dynamically allocate memory for the stack
    this->size = size;
    top1 = -1;  // Initialize top index for the first stack as -1 (empty stack)
    top2 = size;  // Initialize top index for the second stack as size (empty stack)
   }


   // Functions

   void push1(int data){
    if(top2 - top1 == 1){  
        cout<<"Overflow"<<endl;  // Print an overflow message if there is no space in the first stack
    }else{
        top1++;
        arr[top1]=data;  // Insert data into the first stack
    }
   }

    void push2(int data){
    if(top2 - top1 == 1){  
        cout<<"Overflow"<<endl;  // Print an overflow message if there is no space in the second stack
    }else{
        top2--;
        arr[top2]=data;  // Insert data into the second stack
    }
   }

   void pop1(){
    if(top1 == -1){  // Check if first stack is empty
       cout<<"Stack 1 is underflow, can't delete"<<endl;  // Print an underflow message if first stack is empty
    }else{
        top1--;  // Decrement top index for the first stack to remove the top element
    }
   }

   void pop2(){
    if(top2 == size){  // Check if second stack is empty
       cout<<"Stack 2 is underflow, can't delete"<<endl;  // Print an underflow message if second stack is empty
    }else{
        top2++;  // Increment top index for the second stack to remove the top element
    }
   }
   
   // Just for understanding purposes
    void print(){
        for(int i = 0;i<size;i++){
            cout<<arr[i]<<" ";  // Print all elements in the array
        }
    }


};

int main(){
   

    Stack s(10);  // Create a stack object with size 10

   s.push1(1); // Push 1 onto the first stack
   s.push1(2); // Push 2 onto the first stack
   s.push1(3); // Push 3 onto the first stack
   s.push1(4); // Push 4 onto the first stack
   s.push1(5); // Push 5 onto the first stack
   s.push2(6); // Push 6 onto the second stack
   s.push2(7); // Push 7 onto the second stack
   s.push2(8); // Push 8 onto the second stack
   s.push2(9); // Push 9 onto the second stack
   s.push2(10); // Push 10 onto the second stack

   

    s.print();  // Print the elements in the array

    return 0; // Exit the program
}
