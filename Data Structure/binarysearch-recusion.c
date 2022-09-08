#include<stdio.h>
int binarysearch(int arr[], int low, int high, int num)
{
    if (high>=low) 
    {
        int  mid = low+(high-low)/2;
        if(arr[mid]==num) return mid;
        else if(arr[mid]>num) return binarysearch(arr, low, mid-1, num);
        else return binarysearch(arr, mid+1, high , num);
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array in ascending order: ");
    for(int i =0; i<size; i++)
     {
       scanf("%d", &arr[i]);
     }
    printf("Enter the number you want to search: ");
    int num;
    scanf("%d", &num);
    int answer = binarysearch(arr, 0, size-1, num);
    if(answer==-1) printf("%d not found in array", num);
    else printf("%d present at index %d", num, answer);
}
