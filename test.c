#include<stdio.h>

int stack[10];
int top = -1;

void push(int data){
    if(top == 9) {printf("Stack Overflow!\n");}
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

void peek(){
    printf("Top value is : %d",stack[top]);
}

void display(){
    if(top==-1){
		printf("%d stack empty\n");
	}
	else{
		for(int i=9;i>=0;i--){
			printf("%d\t",stack[i]);
		}
	}
    
}

int main(){

    

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);  //Should print overflow after 10
    push(11);
    display();
    pop(); //Must pop 10 out of stack
    display();
    

    return 0;
}