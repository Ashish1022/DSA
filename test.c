#include<stdio.h>
#include<stdlib.h>
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

int main(){

    struct Stack* stack;

    

    printf("%d",sizeof(100*sizeof(stack)));


    return 0;
}