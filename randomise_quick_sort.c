// Randomise Quick sort
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
    int a[] = {-18, 17, 20, 91, -9, 16};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    display(a, n);
    return 0;
}

//output - 

//-18
//-9
//16
//17
//20
//91