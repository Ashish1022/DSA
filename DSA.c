#include<stdio.h>
#define SIZE 10

int top = -1;
int array[10];


int isFull(int array[SIZE]){
    if(top == SIZE-1) return 1;
}

int isEmpty(){
    if(top == -1) return 1;
}

void push(int array[],int data){
    if(isFull(array)){
        printf("Overflow!\n");
    }
    else{
        top++;
        array[top] = data;
    }
}

void pop(){
    if(isEmpty(array)){
        printf("Underflow!\n");
    }
    else{
        printf("%d popped",array[top]);
        top--;
    }
}
