#include<stdio.h>

int main(){

    int arr[10];

    printf("Enter the values of array : ");
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
    }

    for(int i=1;i<10;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

