#include <iostream>
#include <stack>
using namespace std;

int main(){
   
   stack<int> s; // Create an empty stack of integers

   s.push(10); // Push 10 onto the stack
   s.push(20); // Push 20 onto the stack
   s.push(30); // Push 30 onto the stack

   while(!s.empty()){ // Loop until the stack is empty
    cout<<s.top()<<" "; // Print the top element of the stack
    s.pop(); // Remove the top element of the stack
   }

    return 0; // Exit the program
}
