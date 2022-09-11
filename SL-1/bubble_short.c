#include <stdio.h>

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])//condition for swaping
            {
                //swap element
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    printf("animesh maiti 2130006\n");
    int arr[] = {5, 1, 6, 2, 9};
    int n=5;
    printf("original array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d \n", arr[i]);
    
    printf("smallest number is %d\n",arr[0]);
    printf("largest number is %d",arr[n-1]);
    return 0;
}

