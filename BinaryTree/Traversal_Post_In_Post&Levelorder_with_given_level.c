#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void levelorder(struct node* root, int l){
    if(root!=NULL)    
    {
        if(l==1){
            printf("%d ",root->data);
        }
        else{
            levelorder(root->left, l-1);
            levelorder(root->right, l-1);
        }
    }
}

int main(){
    struct node* root = createnode(1);
    struct node* p1 = createnode(2);
    struct node* p2 = createnode(3);
    struct node* p3 = createnode(4);
    struct node* p4 = createnode(5);
    // struct node* p5 = createnode(9);
    
    root->left=p1;
    root->right=p2;
    
    p1->left=p3;
    p1->right=p4;
    
    // p2->right=p5;
    /*          1
               / \
              2   3
             / \ 
            4   5
    */
    
    printf("Preorder Traversal : ");
    preorder(root);
    printf("\nInorder Traversal : ");
    inorder(root);
    printf("\nPostorder Traversal : ");
    postorder(root);
    printf("\nLevelorder Traversal : ");
    levelorder(root,3);
    return 0;
}  
