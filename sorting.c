#include <stdio.h>

void swap(int * current, int * next)
{
    int tmp = *current;
    *current = *next;
    *next = tmp;
}

int bubble_sort(int arr[],int n)
{
    int i, j;
    int swapped;
    for (i = 0; i<n-1; i++)
    {
        swapped = 0;
        for (j = i; j<n-1; j++)
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

void print_arr(int * arr, int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main() {
    int arr[] = { 1, 9, 8, 4, 3, 7, 10, 11, 2, 5 };
    bubble_sort(arr,10);
    print_arr(arr,10);
}