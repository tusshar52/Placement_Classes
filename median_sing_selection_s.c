#include <stdio.h> 
//finding median using selection sort

void swap(int *x, int *y){ 
    int t = *x; 
    *x = *y; 
    *y = t; 
} 

void selectionSort(int arr[], int n){ 
    int i, j, index; 
    for (i = 0; i < n-1; i++){
        index = i; 
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[index]) 
                index = j; 
        }    
        swap(&arr[index], &arr[i]); 
    } 
} 

int main() 
{ 
    int arr[] = {1,5,3,2,7,6,4,9,11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    selectionSort(arr, n); 
    if(n%2 ==0){
        printf("%d",arr[n/2]);
    }
    else{
        printf("%d",(arr[n/2]+arr[1+n/2])/2);
    }
    return 0; 
}

//output -
//5