#include<stdlib.h>
#include<stdio.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void traversal(struct node *ptr){
    printf("List -> ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

void traversalBack(struct node *ptr){
    printf("List -> ");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
    }
}

int main(){

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node*) malloc(sizeof(struct node));
    first = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));
    fourth = (struct node*) malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 1;
    head->next = first;
    
    first->prev = head;
    first->data = 2;
    first->next = second;

    second->prev = first;
    second->data = 3;
    second->next = third;

    third->prev = second;
    third->data = 4;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 5;
    fourth->next = NULL;

    traversalBack(head);

    return 0;
}