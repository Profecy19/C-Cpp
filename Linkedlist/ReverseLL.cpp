/*
Reverse Single LinkedList
*/
#include <iostream>
using namespace std;
class LinkNode{
    public:
        int data;
        LinkNode* next;
        
        LinkNode(int val){
            data= val;
            next=nullptr;
        }
};
LinkNode* convertToLL(int arr[], int n){
    LinkNode* head = new LinkNode(arr[0]);
    LinkNode* curr = head;
    int i=1;
    while (i<n){
        curr->next = new LinkNode(arr[i]);
        curr = curr->next;
        i++;
    }
    return head;
}
/*
LinkNode* Reverse(LinkNode* head){
    LinkNode* curr = head;
    LinkNode* nnext = curr->next;
    LinkNode* prev = nullptr;
    while (nnext!=nullptr){
        curr->next = prev;
        prev=curr;
        curr=nnext;
        nnext=nnext->next;
    }
    curr->next = prev;
    return curr;
}
*/

LinkNode* Reverse(LinkNode* head){
    LinkNode* curr = head;
    LinkNode* nnext = nullptr;
    LinkNode* prev = nullptr;
    while (curr!=nullptr){
        nnext = curr->next;
        curr->next = prev;
        prev=curr;
        curr=nnext;
    }
    return prev;
}

void printll(LinkNode* head){
    LinkNode* curr = head;
    while(curr != nullptr){
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL";
}

int main(){
    int arr[5]={1,9,0,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    LinkNode* head=convertToLL(arr,n);
    printll(head);
    LinkNode* rhead= Reverse(head);
    cout << endl;
    printll(rhead);
}