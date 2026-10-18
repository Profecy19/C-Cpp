/**
 * Implementation of a singly linked list in C++17.
 * Node structure represents each element in the linked list.
 * | data | next |
 * here data represents the value stored in the node, and next is a pointer to the next node in the list.
 * 1 -> 2 -> 3 -> nullptr
*/
#include <iostream>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode* next;

        ListNode(int val){
            data = val;
            next = nullptr;
        }
};

void printList(ListNode *head){
    ListNode* current = head;
    while(current != nullptr){
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Your code to test the linked list implementation goes here.
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    printList(head);


    return 0;
}