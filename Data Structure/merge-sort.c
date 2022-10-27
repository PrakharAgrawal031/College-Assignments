#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int l_ind, int mid, int r_ind)
{
    int i,k,j;
    
    int n1 = mid - l_ind + 1;
    int n2 = r_ind - mid;
    
    int t1[n1], t2[n2];
    
    k=l_ind;
    for(i = 0; i<n1; i++)
       { t1[i] = arr[k];
         k++;
       }
    k=mid+1;
    for(j=0; j<n2; j++)
       { t2[j] = arr[k];
         k++;
       }
    
    i=0;
    j=0;
    k=l_ind;
    while(i<n1 && j<n2)
    {
        if(t1[i] < t2[j])
        {
            arr[k++] = t1[i++];
        }
        
         else {
            arr[k++] = t2[j++];
        }
     
    }
    
    while (i < n1) {
        arr[k++] = t1[i++];
    }
    
    while (j < n2) {
        arr[k++] = t2[j++];
    }

}

void merge_sort(int arr[], int l_ind, int r_ind)
{
    if(l_ind<r_ind)
    {
        int mid = (l_ind + r_ind) / 2;
        merge_sort(arr, l_ind, mid);
        merge_sort(arr, mid+1, r_ind);
        merge(arr, l_ind, mid, r_ind);
    }
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++)
    {
        printf("E%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    printf("size = %d\n", size);
    printf("Given array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    merge_sort(arr, 0, size-1);
    
    printf("Sorted array: \n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

}
