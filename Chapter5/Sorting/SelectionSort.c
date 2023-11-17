#include<stdio.h>

int main(){

    int array[10] = {9,7,8,6,5,4,3,2,1,0};
    int indexOfMin,temp;

    for(int i = 0; i<9 ; i++){
        indexOfMin = i;
        for(int j = i+1; j<10;j++){
            if(array[j] < array[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = array[i];
        array[i] = array[indexOfMin];
        array[indexOfMin] = temp;
    }

    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }

    return 0;
}