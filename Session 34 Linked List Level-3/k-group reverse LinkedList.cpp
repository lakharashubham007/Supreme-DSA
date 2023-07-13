#include<iostream> 

using namespace std; 

class Node{ // Definition of the Node class for a linked list.
    public:
    int data; // Data stored in the node.
    Node* next; // Pointer to the next node in the list.

    Node(){ // Default constructor for Node class.
        this->data = 0; // Initialize data to 0.
        this->next = NULL; // Initialize next pointer to NULL.
    }

    Node(int data){ // Parameterized constructor for Node class.
        this->data = data; // Initialize data with the given value.
        this->next = NULL; // Initialize next pointer to NULL.
    }

};

void print(Node* &head){ // Function to print the linked list.
    Node* temp = head; // Create a temporary pointer to iterate through the list.
    while(temp!=NULL){ // Iterate until the end of the list is reached.
        cout<<temp->data<<" "; // Print the data in the current node.
        temp = temp->next; // Move to the next node.
    }
}

int getLength(Node* head){ // Function to get the length of the linked list.
    int len = 0; // Initialize the length to 0.
    Node* temp = head; // Create a temporary pointer to iterate through the list.
    while(temp!=NULL){ // Iterate until the end of the list is reached.
        temp = temp->next; // Move to the next node.
        len++; // Increment the length.
    }
    return len; // Return the length of the list.
}

Node* reverseKNodes(Node* &head, int k){ // Function to reverse K nodes in the linked list.
    if(head == NULL){ // If the list is empty, return NULL.
        return head;
    }

    int len = getLength(head); // Get the length of the list.
    if(k>len){ // If K is greater than the length of the list, return the original list.
        return head;
    }

    Node* prev = NULL; // Pointer to the previous node.
    Node* curr = head; // Pointer to the current node.
    Node* forward = curr->next; // Pointer to the next node.
    int count = 0; // Counter for the number of nodes reversed.
    while(count<k){ // Reverse K nodes.
        forward = curr->next; // Save the next node.
        curr->next = prev; // Reverse the link.
        prev = curr; // Move the pointers forward.
        curr = forward;
        count++;
    }
    if(forward!=NULL){ // If there are more nodes remaining, recursively reverse the next K nodes.
        head->next = reverseKNodes(forward, k);
    }
    return prev; // Return the new head of the reversed list.
}

int main(){ // Main function, entry point of the program.
    Node* head = new Node(1); // Create nodes and establish connections to form a linked list.
    Node* first = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);
    Node* fourth = new Node(5);
    Node* fifth = new Node(6);

    head->next = first; // Connect the nodes.
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    print(head); // Print the original linked list.
    cout<<endl;

    Node* newHead = reverseKNodes(head,3); // Reverse the linked list in groups of 3 nodes.

    cout<<endl;
    print(newHead); // Print the reversed linked list.
    return 0; // Return 0 to indicate successful execution of the program.
}



/**
 * Time Complexity:

Traversing the linked list in the print function: O(n)
Calculating the length of the linked list in the getLength function: O(n)
Reversing K nodes in the reverseKNodes function: O(n)
Creating the linked list and calling functions in the main function: O(n)
Overall Time Complexity: O(n)

Space Complexity:

Space required for the linked list: O(n)
Additional temporary variables and function parameters: O(1)
Overall Space Complexity: O(n)
 * 
 * 
 * 
 */