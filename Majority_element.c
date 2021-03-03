#include <stdio.h>

void Maj_e(int *arr, int n) 
{
 int i,IndexOfMajElem = 0, c = 1;
    for(i = 1; i < n; i++) 
	{
        if(arr[IndexOfMajElem] == arr[i])
            c++;
        else
            c--;
         
        if(c == 0) {
            IndexOfMajElem = i;
            c = 1;
        }
    }
    c = 0;
    for (i = 0; i < n; i++) 
	{
        if(arr[i] == arr[IndexOfMajElem])
            c++; 
 }
    if(c > (n/2))
        printf("%d\n", arr[IndexOfMajElem]);
    else
        printf("No Majority Elements Found.\n");
}
 
int main()
{
    int arr[] = { 4, 8, 4, 4, 7, 4 , 4, 8};	
    int n = sizeof(arr)/sizeof(arr[0]);
	Maj_e(arr, n);
    return 0;
}

//output - 
//4