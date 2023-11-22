#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

struct stack{
    char *array;
    int top;
    unsigned size;
};

struct stack *createNode(unsigned size){
    struct stack *node = (struct stack*)malloc(sizeof(struct stack));

    node->size = size;
    node->top = -1;

    node->array = (char*)malloc(node->size*sizeof(char));

    return node;
}

int isFull(struct stack* stack){
    return stack->top == stack->size - 1;
}
 
int isEmpty(struct stack* stack){
    return stack->top == -1;
}

void push(struct stack *node,char item){
    if(isFull(node)) return;
    node->array[++node->top] = item;
}

char pop(struct stack *node){
    if(isEmpty(node)) return -1;
    return node->array[node->top--];
}

void reverse(char str[]){
    int n = strlen(str);
    struct stack* node = createNode(n);
    for(int i = 0;i<n;i++){
        push(node,str[i]);
    }
    for (int i = 0; i < n; i++){
        str[i] = pop(node);
    }
    
}



int main(){

    char str[] = "ashish";
 
    reverse(str);
    printf("Reversed string is %s", str);
 
    return 0;
}
