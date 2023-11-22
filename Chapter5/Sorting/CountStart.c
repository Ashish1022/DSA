#include<stdio.h>
#include<stdlib.h>

int array[10]={6,5,7,9,4,1,0,3,2,8};

int getMax(){
    int i,temp,max;
    max=array[0];
    for(i=1;i<10;i++)
        if(array[i]>max)
            max = array[i];
    return max;
}

void CountSort(){
    int max = getMax(max);
    int* count = (int *)malloc((max+1)*sizeof(int));

    for(int i=0;i<10;i++){
        count[i] = 0; 
    }
    for(int i=0;i<max;i++){
        count[array[i]] = count[i]+1;
    }
}

int main(){

    
    

    return 0;
}