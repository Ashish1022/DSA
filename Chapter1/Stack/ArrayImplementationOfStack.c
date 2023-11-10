#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h>


struct Stack { 
	int top; 
	int capacity; 
	int* array; 
}; 

 
struct Stack* createStack(int capacity) 
{ 
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
	stack->capacity = capacity; 
	stack->top = -1; 
	stack->array = (int*)malloc(stack->capacity * sizeof(int));

	return stack; 
} 


int isFull(struct Stack* stack) 
{ 
	return stack->top == stack->capacity - 1; 
} 


int isEmpty(struct Stack* stack) 
{ 
	return stack->top == -1; 
} 


void push(struct Stack* stack, int item) 
{ 
	if (isFull(stack)) 
		printf("Stack Overflow");
	else{
		stack->array[++stack->top] = item; 
		printf("%d pushed to stack\n", item); 
	}
} 


int pop(struct Stack* stack) 
{ 
	if (isEmpty(stack)) 
		printf("Stack is Empty"); 
	else{
		
		return stack->array[stack->top--]; 
	}
} 


int peek(struct Stack* stack) 
{ 
	if (isEmpty(stack)) 
		return INT_MIN; 
	return stack->array[stack->top]; 
} 


int main() 
{ 
	struct Stack* stack = createStack(10); 

	push(stack, 10); 
	push(stack, 20); 
	push(stack, 30); 
	push(stack, 40); 
	push(stack, 50); 
	push(stack, 60); 
	push(stack, 70); 
	push(stack, 80); 
	push(stack, 90); 
	push(stack, 100); 
	push(stack, 110); 

	printf("\n%d popped from stack\n", pop(stack)); 


	return 0; 
} 
