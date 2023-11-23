#include<stdio.h>

int stack[5];
int top = -1;

void push(int data){
    if(top == 9) printf("Stack Overflow");
    else{
        top++;
        stack[top] = data;
    }
}

void pop(){
    if(top == -1) printf("Stack Underflow");
    else{
        printf("%d popped\n",stack[top]);
        top--;
    }
}

void traversal(){
    for(int i=0;i<top+1;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main(){

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    traversal();
    pop();
    pop();
    traversal();

    return 0;
}