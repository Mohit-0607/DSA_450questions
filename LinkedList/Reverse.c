#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* next;
    int data;
};

void insert(struct node** head, int data){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next=NULL;
    if(*head == NULL){
        *head = newnode;
        return;
    }
    else{
        struct node* last = *head;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next = newnode;
        return;
    }
}

void print(struct node* head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
}

struct node* reverse(struct node* head){
    struct node* cur = head;
    struct node* p = NULL;
    struct node* n;
    while(cur!=NULL){
        n = cur->next;
        cur->next = p;
        p = cur;
        cur = n;
    }
    head = p;
    return head;
}

int main(){
    int n;
    scanf("%d",&n);
    struct node* head;
    // head = (struct node*)malloc(sizeof(struct node));
    for(int i=1;i<=n;i++){
        int data;
        scanf("%d",&data);
        insert(&head,data);
    }
    print(head);
    head = reverse(head);
    print(head);
    return 0;
}