#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool detectLoopInLinkedList(Node* head){
    while(head){
        if(head->data==-1) return true;
        head->data = -1;
        head=head->next;
    }
    return false;
}

int main(){
    Node* head = new Node;
    head->data = 1;
    Node* first = new Node;
    first->data = 2;
    Node* second = new Node;
    second->data=3;
    head->next = first;
    first->next = second;
    // second->next = first;
    bool ans = detectLoopInLinkedList(head);
    cout<<ans;
    return 0;
}
