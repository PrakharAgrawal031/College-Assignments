#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A%d%d: ", i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array created: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
