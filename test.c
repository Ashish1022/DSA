#include<stdio.h>

int stack[5];
int top = -1;

void push(){
    int data;
    printf("Enter the data : ");
    scanf("%d",&data);
    if(top==4){
        printf("Stack overflow\n");
    } 
    else{
        top++;
        stack[top] = data; 
    }
}

void display(){
    int i=0;
    for(i=0;i<4;i++){
        printf("%d\t",stack[i]);
    }
}

int main(){

    push();
    push();
    push();
    push();
    push();
    push();

    display();

    return 0;
}