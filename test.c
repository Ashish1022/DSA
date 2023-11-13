#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *InsertAtHead(struct node *head,int data){
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	ptr->next = head;
	ptr->data = data;

	return ptr;
}

void traversal(struct node *ptr){
	if(ptr==NULL) printf("List is Empty!");
	else{
		printf("List -> ");
		while(ptr != NULL){
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
		printf("\n");
	}
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
	head = InsertAtHead(head,0);
	traversal(head);
	

	return 0;
}