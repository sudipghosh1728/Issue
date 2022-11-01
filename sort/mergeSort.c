#include <stdio.h>
#include <stdlib.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
void merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[25];
    i = k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
int main()
{
    // Your code goes here
    int n;
    printf("Enter the number of element you want  -  ");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    printf("Enter the elements  -  \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}