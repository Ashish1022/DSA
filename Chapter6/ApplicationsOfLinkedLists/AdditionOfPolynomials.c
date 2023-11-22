#include<stdio.h>
#include<stdlib.h>

struct node{
    float coeff;
    int expo;
    struct node *next;
};

struct node *insert(struct node *head, float coeff, int expo){
    struct node *temp;
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->coeff=coeff;
    newP->expo=expo;
    newP->next=NULL;

    if(head == NULL || expo > head->expo){
        newP->next = head;
        head = newP;
    }
    else{
        temp = head;
        while(temp->next != NULL && temp->next->expo >= expo){
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
    return head;
}

void print(struct node* head){
    if(head==NULL){
        printf("No polynomial");
    }
    else{
        struct node *ptr = head;
        while(ptr!=NULL){
            printf("(%.1fx^%d)",ptr->coeff,ptr->expo);
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

void polyAdd(struct node *head1, struct node *head2){
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->expo == ptr2->expo){
            head3 = insert(head3,ptr1->coeff+ptr2->coeff,ptr1->expo);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else if(ptr1->expo > ptr2->expo){
            head3 = insert(head3,ptr1->coeff,ptr1->expo);
            ptr1 = ptr1->next;
        }
        else if(ptr1->expo < ptr2->expo){
            head3 = insert(head3,ptr1->coeff,ptr1->expo);
            ptr2 = ptr2->next;
        }
    }
    while(ptr1!=NULL){
        head3 = insert(head3,ptr1->coeff,ptr1->expo);
        ptr1 = ptr1->next;
    }
    while(ptr2!=NULL){
        head3 = insert(head3,ptr2->coeff,ptr2->expo);
        ptr2 = ptr2->next;
    }
    printf("Addition of polynomials is : ");
    print(head3);
}


int main(){

    struct node *head2=NULL;
    struct node *head1=NULL;
    printf("Enter the polynomiala\n");

    head1 = create(head1);
    head2 = create(head2);

    polyAdd(head1,head2);

    return 0;
}