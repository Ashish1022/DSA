#include<stdio.h>

int queue[5];
int head = -1;
int tail = -1;


void enqueue(int data){

    if(tail == 4) printf("Queue is Full\n");
    else if(head == -1 && tail == -1){
        tail=head=0;
        queue[tail] = data;
    }
    else{
        tail++;
        queue[tail] = data;
    }
}

void dequeue(){
    if(head==-1 && tail == -1) printf("Underflow");
    else if(head==0 && tail == 0){
        head=tail=-1;
    }
    else{
        printf("%d Dequeued\n",queue[head]);
        head++;
    }
}

// void front(){

// }

void dispaly(){
    
	for(int i=head;i<=tail+1;i++){
		printf("%d\t",queue[i]);
	}
	
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    dequeue();

    dispaly();

    return 0;
}




