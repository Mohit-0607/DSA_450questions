#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* next;
    int data;
};
void insertelement(struct node* head_ref,int data){
    struct node* new;
    new = (struct node*)malloc(sizeof(struct node));
    struct node* last = head_ref;
    new->data = data;
    new->next=NULL;
    if(head_ref==NULL){
        head_ref=new;
        return;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=new;
    return;
}
/*void printlist(struct node* head){
    while(head->next!=NULL){
        head=head->next;
        printf("%d->",head->data);
    }
}*/
void printlist(struct node* head){ 
    if(head==NULL)
        return;
    printf("%d->",head->data);
    printlist(head->next);
}
int main(){
    int n,data;
    scanf("%d",&n);
    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        insertelement(head,data);
    }
    printlist(head);
    return 0;
}  
