#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st; // Create an empty stack

    st.push(10); // Push 10 onto the stack
    st.push(20); // Push 20 onto the stack
    st.push(30); // Push 30 onto the stack
    st.push(40); // Push 40 onto the stack
    st.push(50); // Push 50 onto the stack

    cout << "element removed: " << st.top() << endl; // Print the top element of the stack
    st.pop(); // Remove the top element of the stack
    cout << "deleted successfully!" << endl; // Print a success message

    cout << "Element at top: " << st.top() << endl; // Print the new top element of the stack

    cout << "Size of Stack: " << st.size() << endl; // Print the size of the stack

    if (st.empty()) // Check if the stack is empty
    {
        cout << "Stack is empty: " << endl; // Print a message indicating that the stack is empty
    }
    else
    {
        cout << "Stack is not empty" << endl; // Print a message indicating that the stack is not empty
    }

    return 0; // Exit the program
}
