#include<stdio.h>

int queue[100];
int head = -1;
int tail = -1;

int isEmpty(){
    if(head==-1 && tail==-1){
        return 1;
    }
}

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

int dequeue(){
    if(head==-1 && tail == -1) printf("Underflow");
    else if(head==0 && tail == 0){
        head=tail=-1;
    }
    else{
        printf("%d Dequeued\n",queue[head]);
        return head;
        head++;
    }
}



void dispaly(){
    
	for(int i=head;i<=tail+1;i++){
		printf("%d\t",queue[i]);
	}
	
}


int main(){
    
    int u;
    int i=1;
    int visited[7] = {0,0,0,0,0,0,0};
    
    int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,0,1,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    printf("%d ",i);
    visited[i] = 1;
    enqueue(i);

    while(!isEmpty()){
        int node = dequeue();
        for(int j=0;j<7;j++){
            if(a[node][j] == 1 && visited[j]==0){
                printf("%d ",j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }

    return 0;
}