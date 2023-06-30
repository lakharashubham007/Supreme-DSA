//Middl by length approach




#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int data) {
        val = data;
        next = NULL;
    }
};

ListNode* findMiddle(ListNode* head) {
    if (head == NULL) {
        return NULL;
    }

    int length = 0;
    ListNode* curr = head;
    while (curr != NULL) {
        length++;
        curr = curr->next;
    }

    int middleIndex = length / 2;
    curr = head;
    for (int i = 0; i < middleIndex; i++) {
        curr = curr->next;
    }

    return curr;
}

int main() {
    // Create a sample linked list
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode* middleNode = findMiddle(head);

    if (middleNode != NULL) {
        cout << "Middle element: " << middleNode->val << endl;
    } else {
        cout << "Empty linked list." << endl;
    }

    return 0;
}
