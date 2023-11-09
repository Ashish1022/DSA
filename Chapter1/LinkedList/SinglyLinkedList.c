#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

// INSERTION FUNCTIONS

// struct node *InsertAtBegining(struct node *head, int data){
//     struct node *ptr;
//     ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->next=head;
//     ptr->data=data;
    

//     return ptr;

// }

// struct node *InsertAtIndex(struct node *head,int index,int data){
//     struct node *p=head;
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     int i=0;

//     while(i!=index-1){
//         p=p->next;
//         i++;
//     }

//     ptr->data=data;
//     ptr->next=p->next;
//     p->next=ptr;

//     return head;
// }

// struct node* InsertAtEnd(struct node *head, int data){
//     struct node *ptr = (struct node *)malloc(sizeof(struct node));
//     struct node *p=head;

//     while(p->next!=NULL){
//         p=p->next;

//     }
//     p->next=ptr;
//     ptr->data=data;
//     ptr->next=NULL;

//     return head;
// }

// DELETION FUNCTIONS


struct node *deleteHeadNode(struct node *head){
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct node *deleteAtIndex(struct node* head,int index){
    struct node *p=head;
    struct node *p1=head;
    int i=0;

    while(i!=index-1){
        p=p->next;
        i++;
    }
    while(i!=index+1){
        p1=p1->next;
        i++;
    }

    p->next=p1->next;
    free(p1);
    return head;
}

struct node *deleteAtEnd(struct node *head){
    struct node *ptr = head;
    struct node *p = head->next;
    while(p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    ptr->next=NULL;
    free(p);

    return head;
}


void traversal(struct node *ptr){
    printf("Linked List :- ");
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = first;
    
    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    traversal(head);
    // head = deleteHeadNode(head);
    // head = deleteAtIndex(head,2);
    head = deleteAtEnd(head);
    traversal(head);

    return 0;
}