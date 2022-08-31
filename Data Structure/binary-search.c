#include <stdio.h>
int binarysearch(int arr[], int size, int item)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (item == arr[mid])
        {
            return mid;
        }
        else if (item < arr[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the elements of the array in ascending order: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int item;
    printf("\nEnter the item you wish to search: ");
    scanf("%d", &item);
    int position = -1;
    position = binarysearch(arr, size, item) + 1;
    if (position != 0)
    {
        printf("\nItem is at %d position", position);
    }
    else
        printf("\nItem not found");
    return 0;
}
