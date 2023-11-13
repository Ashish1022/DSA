#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    int *left;
    int *right;
};

void inOrder(struct node *root){
    
    if(root!=NULL){
        preOrder(root->left);
        printf("%d ",root->data);
        preOrder(root->right);
    }
}
void preOrder(struct node *root){
    
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

struct node *createNode(int data){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
}

int main(){

    struct node *p = createNode(11);
    struct node *p1 = createNode(6);
    struct node *p2 = createNode(16);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(8);
    struct node *p5 = createNode(12);
    struct node *p6 = createNode(13);

    p->left=p1;
    p->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=p5;
    p2->right=p6;

    p3->left=NULL;
    p3->right=NULL;

    p4->left=NULL;
    p4->right=NULL;

    p5->left=NULL;
    p5->right=NULL;

    p6->left=NULL;
    p6->right=NULL;

    
    printf("InOrder -> ");
    preOrder(p);

    return 0;
}