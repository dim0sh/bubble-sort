#include <stdio.h>
#include <stdlib.h>

void print_arr(int * arr,int n)
{
    for (int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

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


void scrambled_arr(int * arr)
{
    arr[0] = 10;
    arr[1] = 8;
    arr[2] = 7;
    arr[3] = 4;
    arr[4] = 6;
    arr[5] = 12;
    arr[6] = 1;
    arr[7] = 2;
    arr[8] = 9;
    arr[9] = 3;
}

int main() {
    int * arr = calloc(10,sizeof(int));
    scrambled_arr(arr);
    printf("bubble\n");
    bubble_sort(arr,10);
    print_arr(arr,10);
    scrambled_arr(arr);
    // print_arr(arr,10);
    printf("selection\n");
    selection_sort(arr,10);
    print_arr(arr,10);
    printf("heapsort\n");
    scrambled_arr(arr);
}