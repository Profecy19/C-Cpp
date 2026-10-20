/*
Find the length of the 
*/
#include<iostream>
using namespace std;
class LinkNode{
    public:
        int data;
        LinkNode* next;
        LinkNode(int val){
            data=val;
            next=nullptr;
        }
};
void printLL(LinkNode* head){
    LinkNode* curr= head;
    while(curr!=nullptr){
        if(curr->next!=nullptr){
            cout<<curr->data<<" -> ";
        }
        else{
            cout<<curr->data;
        }
        curr = curr->next;
    }
}
int sizeo(LinkNode* head){
    LinkNode* curr= head;
    int i=1;
    while(curr->next!=nullptr){
        i++;
        curr=curr->next;
    }
    return i;
}
int main(){
    LinkNode* head= new LinkNode(4);
    head->next= new LinkNode(5);
    head->next->next= new LinkNode(6);
    head->next->next->next= new LinkNode(7);
    head->next->next->next->next= new LinkNode(12);
    printLL(head);
    cout<<"\nSize of the Linked List is: "<<sizeo(head);
    return 0;
}