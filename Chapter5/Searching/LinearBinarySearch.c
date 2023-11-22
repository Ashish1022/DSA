#include<stdio.h>

// int linearSearch(int sample[],int size,int data){
    
//     for(int i=0;i<size;i++){
//         if(sample[i]==data)
//             return i;
//     }
//     return -1;
// }

int BinarySearch(int sample[],int size,int data){
    int mid,low=0,high=size-1,i=0;
    // int flag = -1;
    while(low<=high){
        mid=(low+high)/2;
        if(sample[mid]==data){
            return mid;
        }
        if(sample[mid]<data){
            low = mid+1;
        }
        else if(sample[mid]>data){
            high = mid-1;
        }
    }
    return -1;
}

int main(){

    // int array[] = {1,4,3,5,6,54,5,6,6,5,5,6,6,6,5,22,434,53,5,46,54645,57,564};
    int array1[] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(array1)/sizeof(int);
    // int value = linearSearch(array,size,22);
    // printf("Element found at index : %d",value);

    printf("Element : %d",BinarySearch(array1,size,4));

    return 0;
}