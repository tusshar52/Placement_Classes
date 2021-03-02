//median using Randomise Quick sort
// o(nlogn)
#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void Randomise(int arr[], int l, int h){
    int n = h-l+1;
    int temp = rand()%n;
    swap(&arr[l+temp], &arr[h]);
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high){
    if (low < high){
        Randomise(array,low,high);
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void display(int arr[], int n){
    for (int i = 0; i < n; ++i)
        printf("%d\n", arr[i]);
}

int main(){
    int arr[] = {1,5,3,2,7,6,4,9,11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n - 1); 
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