#include <stdio.h>

int main()
{
    int size,temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(int i = 0; i<size; i++)
    {
        printf("arr[%d] : ", i+1);
        scanf("%d", &arr[i]); 
    }
    
    for(int i = 0; i<size-1;++i)
    {
        for(int j = 0; j<size-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;       
            }
        }
    }
    for(int i = 0 ; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
