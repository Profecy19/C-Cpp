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
    while(head != nullptr){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Your code to test the linked list implementation goes here.
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(2);
    ListNode* third = new ListNode(3);

    head->next = second;
    second->next = third;
    printList(head);



    return 0;
}