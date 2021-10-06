#include <iostream>

using namespace std;

struct node {
    int val;
    node* next;
};

void insert(node** head,int n){
    node* ne = new node();
    ne->val = n;
    ne->next = NULL;
    node* p = *head;
    if(*head==NULL){
        *head = ne; 
        return;
    }
    while(p->next!=NULL){
        p=p->next;
    }
        p->next = ne;
}

void oddeven(node** head){
    node* odd = new node();
    node* even = new node();
    odd = *head;
    even = odd->next;
    node* evenptr = even;
    
    while(odd->next!=NULL and even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenptr;
}


void print(node* head){
    while(head!=NULL){
        cout<<head->val<<"->";
        head=head->next;
    }
}

int main() {
    node* head = NULL;
	insert(&head,1);
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);
// 	insert(&head,6);
// 	print(head);
	oddeven(&head);
	print(head);
	return 0;
}
