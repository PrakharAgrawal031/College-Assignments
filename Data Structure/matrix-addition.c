#include <stdio.h>
void main()
{
    int r, c, i, j, a[100][100], b[100][100], sum[100][100];
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);

    printf("##### First Matrix ###### \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element a %d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("##### Second Matrix ###### \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element b %d%d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);

            if (j == c - 1)
            {
                printf("\n");
            }
        }
    }
}