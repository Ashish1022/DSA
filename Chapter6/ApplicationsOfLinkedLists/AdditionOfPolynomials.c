#include<stdio.h>
#include<stdlib.h>

struct node{
    float coefficient;
    int exponent;
    struct node *next;
};

struct node *insert(struct node *head, float coeff, int expo){
    struct node *temp;
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->coefficient=coeff;
    newP->exponent=expo;
    newP->next=NULL;

    if(head == NULL || expo < head->exponent){
        newP->next = head;
        head = newP;
    }
    else{
        temp = head;
        while(temp->next != NULL && temp->next->exponent > expo){
            temp=temp->next;
        }
        newP->next = temp->next;
        temp->next = newP;
    }

    return head;

}

struct node *create(struct node *head){
    int n,i,expo;
    float coeff;
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the coefficient for term %d : ",i+1);
        scanf("%f",&coeff);

        printf("Enter the exponent for term %d : ",i+1);
        scanf("%d",&expo);

        head = insert(head,coeff,expo);
    }
}

void print(struct node* head){
    if(head==NULL){
        printf("No polynomial");
    }
    else{
        struct node *ptr = head;
        while(ptr!=NULL){
            printf("(%.1fx^%d)",ptr->coefficient,ptr->exponent);
            ptr=ptr->next;
            if(ptr!=NULL){
                printf(" + ");
            }
            else{
                printf("\n");
            }
        }

    }
}

int main(){

    struct node *head=NULL;
    printf("Enter the polynomial\n");

    head = create(head);
    print(head);

    return 0;
}