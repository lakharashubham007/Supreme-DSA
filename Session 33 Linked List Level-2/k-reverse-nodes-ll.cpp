#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    // temp variable bna kar head pe rakhna hai
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

Node *reverseKNodes(Node *&head, int k)
{
    // Empty Linked List case
    if (head == NULL)
    {
        return head;
    }
    // Invalid case
    int len = getLength(head);
    if (k > len)
    {
        return head;
    }
    // Step - 1 => Reverse first k nodes
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;
    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    // Step - 2 => Recursion
    if (forward != NULL)
    {                                           // We still have nodes left to reverse
        head->next = reverseKNodes(forward, k); // Connection step
    }
    // Return head
    return prev;
}

int main()
{
    // object creation head naam ka
    Node *head = new Node(10);
    // object second head naam ka
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fivth = new Node(50);
    Node *sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fivth;
    fivth->next = sixth;
    sixth->next = NULL;

    print(head);

    Node *newHead = reverseKNodes(head, 6);
    cout << endl;
    print(newHead);

    return 0;
}