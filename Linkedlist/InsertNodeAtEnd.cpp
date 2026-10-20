/*
Insert a node at end from a given linkedlist.

Example

Input:
4 -> 5 -> 6 -> 7 -> 12
Insert Node = 61

Output:
4 -> 5 -> 6 -> 7 -> 12 -> 61

*/
#include <iostream>
using namespace std;
class LinkNode{
    public:
        int data;
        LinkNode* next;
        LinkNode(int val){
            data = val;
            next = nullptr;
        }
};
void printLL(LinkNode* head){
    LinkNode* curr=head;
    while(curr!=nullptr){
        if(curr->next!=nullptr){
            cout << curr->data <<" -> ";
        }
        else{
            cout << curr->data;
        }
        curr=curr->next;
    }
}

void appendNode(LinkNode* head){
    LinkNode* curr = head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next = new LinkNode(61);
}
int main(){
    LinkNode* head= new LinkNode(4);
    head->next= new LinkNode(5);
    head->next->next= new LinkNode(6);
    head->next->next->next= new LinkNode(7);
    head->next->next->next->next= new LinkNode(12);
    printLL(head);
    cout<<endl;
    appendNode(head);
    printLL(head);
    return 0;
}