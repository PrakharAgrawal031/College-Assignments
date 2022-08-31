#include <stdio.h>
int main()
{
    int n, position;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\nSelect the position of the element you want to delete ");
    scanf("%d", &position);
    for (int i = position-1; i <n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n-1 ; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}