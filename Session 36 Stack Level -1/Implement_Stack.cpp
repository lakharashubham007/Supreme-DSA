#include <iostream>
//#include <stack>  // Commented out unused header
using namespace std;


class Stack {
   public:
   int* arr;  // Array to store stack elements
   int top;   // Index of the top element
   int size;  // Maximum size of the stack


   Stack(int size){
    arr = new int[size];  // Dynamically allocate memory for the stack
    this->size = size;
    top=-1;  // Initialize top index as -1 (empty stack)
   }


   // Functions

   void push(int data){
    if(size - top > 1){  // Check if there is space in the stack
        top++;  // Increment top index
        arr[top]=data;  // Insert data at the top position
    }else{
        cout<<"Stack Overflow"<<endl;  // Print an overflow message if stack is full
    }
   }

   void pop(){
    if(top == -1){  // Check if stack is empty
       cout<<"Stack is underflow, can't delete"<<endl;  // Print an underflow message if stack is empty
    }else{
        top--;  // Decrement top index to remove the top element
    }
   }
   

   int getTop(){
    if(top == -1){  // Check if stack is empty
        cout<<"There is no element"<<endl;  // Print a message if stack is empty
    }else{
        return arr[top];  // Return the top element of the stack
    }
   }


   int getSize(){
    return top+1;  // Return the number of elements in the stack (size)
   }


   bool isEmpty(){
    if(top == -1){  // Check if stack is empty
        return true;  // Return true if stack is empty
    }else{
        return false;  // Return false if stack is not empty
    }
   }

};

int main(){
   
   //stack<int> s; // Create an empty stack of integers

    Stack s(10);  // Create a stack object with size 10

   s.push(100); // Push 100 onto the stack
   s.push(200); // Push 200 onto the stack
   s.push(300); // Push 300 onto the stack

   s.getSize();  // Get the size of the stack

   while(!s.isEmpty()){ // Loop until the stack is empty
    cout<<s.getTop()<<" "; // Print the top element of the stack
    s.pop(); // Remove the top element of the stack
   }

    return 0; // Exit the program
}
