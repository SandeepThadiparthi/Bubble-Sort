#include <stdio.h>
void printarray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubblesort(int *arr, int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        int j;
        for (j = 0; j < n - 1 - i; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {23, 46, 64, 57, 30, 544, 9};
    int n = 7;
    printarray(arr, n);
    bubblesort(arr, n);
    printarray(arr, n);
    return 0;
}