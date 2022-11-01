#include <stdio.h>
#include <stdlib.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
            swap(&A[i],&A[j]);
    } while (i < j);

    swap(&A[low],&A[j]);
    return j;
}
void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}
int main()
{
    // Your code goes here
    int n;
    printf("Enter the number of element you want -\t");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    printf("Enter the elements - \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, n - 1);
    printArray(a, n);
    return 0;
}