#include<stdio.h>
int main(){
    int i,j,temp;
int arr[] = {4,5345,44,5435,345345,435345,435,534543,53,4534,534,534,5345,3,53,534,53,5};   

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[i]>arr[j] || arr[i] == arr[j]){
                continue;
            }
            else{
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    printf("\n");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}


// #include <math.h>
// #include <stdio.h>

// void insertionSort(int arr[], int n){

// 	int i, key, j;
// 	for (i = 1; i < n; i++){
// 		key = arr[i];
// 		j = i - 1;

		
// 		while(j >= 0 && arr[j] > key){
// 			arr[j + 1] = arr[j];
// 			j = j - 1;
// 		}
// 		arr[j + 1] = key;
// 	}
// }


// void printArray(int arr[], int n){
// 	int i;
// 	for(i = 0; i < n; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");
// }

// int main(){

// 	int arr[] = {12,11,13,5,6,1,3,4,53,654,78,567,68,5,64,2,22253,5646,45,356,55,3634,453};

// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	insertionSort(arr, n);
// 	printArray(arr, n);

// 	return 0;

// }