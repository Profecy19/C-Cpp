/**
 * Implementation of a singly linked list in C++17.
 * Node structure represents each element in the linked list.
 * | data | next |
 * here data represents the value stored in the node, and next is a pointer to the next node in the list.
 * 1 -> 2 -> 3 -> nullptr
*/
#include <iostream>
using namespace std;
class ListNode{
    public:
        int data;
        ListNode* next;
        
        ListNode(int val){
            data=val;
            next=nullptr;
        }
};

ListNode* convert2LL(int arr[], int n){
    ListNode* head= new ListNode(arr[0]);
    ListNode* current= head;
    for(int i=1;i<n;i++){
        current->next= new ListNode(arr[i]);
        current=current->next;
    }
    return head;
}

void printll(ListNode* head){
    ListNode* curr = head;
    while(curr!=nullptr){
        cout<<curr->data<<" -> ";
        curr=curr->next;
    }
    cout<<"NULL";
}

int main(){
    int n;
    cout << "Enter the size of the array you want: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cout << "Input for index " <<i<<": ";
        cin >> arr[i];
    }

    ListNode* head= convert2LL(arr, n);
    printll(head);
    return 0;
}