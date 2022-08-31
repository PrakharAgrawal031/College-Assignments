#include <stdio.h>
int main()
{
    // Time Complexity = O(n)
    int n, count = 0, num;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], positions[n];
    printf("\nEnter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\nEnter the element you want to search: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("\nElement is present at %d position", i + 1);
            count++;
        }
    }
    if (count == 0)
        printf("\nElement is not present in array");

    else
        printf("\n%d appears %d times in the given array", num, count);

    return 0;
}