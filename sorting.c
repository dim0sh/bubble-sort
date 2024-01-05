#include <stdio.h>
void swap(int * current, int * next)
{
    int tmp = *current;
    *current = *next;
    *next = tmp;
}

void bubble_sort(int arr[],int n)
{
    int i, j;
    int swapped;
    for (i = 0; i<n-1; i++)
    {
        swapped = 0;
        for (j = 0; j<n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
}

void selection_sort(int arr[],int n)
{
    int i,j;
    for (i = 0; i<n-1; i++)
    {
        for (j = i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
}

// void heap_sort(int arr[], int n)
// {
//     for (int i = 0; i<n; i++)
//     {

//     }

// }

void print_arr(int * arr, int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 1, 9, 8, 4, 3, 7, 10, 11, 2, 5 };
    printf("bubble\n");
    bubble_sort(arr,10);
    print_arr(arr,10);
    int arr2[] = { 1, 9, 8, 4, 3, 7, 10, 11, 2, 5 };
    printf("selection\n");
    selection_sort(arr2,10);
    print_arr(arr2,10);
}