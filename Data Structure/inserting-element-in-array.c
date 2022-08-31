#include <stdio.h>
int main()
{
    int n, position, num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("\nEnter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\nSelect the position at which you want to insert a new element ");
    scanf("%d", &position);
    printf("\nenter the new element ");
    scanf("%d", &num);
    for (int i = n + 1; i > position-1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position-1] = num;
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}