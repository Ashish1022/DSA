#include<stdio.h>

int stack[5];
int top = -1;

void push(){
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	if(top == 4){
		printf("Stack Overflow\n");
	}
	else{
		top++;
		stack[top] = data;
	}
}

void pop(){
	if(top == -1){
		printf("Stack Underflow\n");
	}
	else{
		printf("%d popped\n",stack[top]);
		top--;
	}
}

void display(){
	if(top==-1){
		printf("%d stack empty\n");
	}
	else{
		for(int i=4;i>=0;i--){
			printf("%d\t",stack[i]);
		}
	}
}

int main(){

	push();
	push();
	push();
	push();
	push();
	push();
	pop();
	display();
	return 0;
}
