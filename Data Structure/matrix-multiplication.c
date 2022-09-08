#include <stdio.h>

void inputarr(int arr1[][10], int arr2[][10], int row1, int col1, int row2, int col2);
void matrixproduct(int arr1[][10], int arr2[][10], int multimat[][10], int row1, int col1, int row2, int col2);


int main()
{
	int arr1[10][10], arr2[10][10], mult[10][10], row1, col1, row2, col2, i, j, k;

	printf("Enter rows and column for 1st matrix: ");
	scanf("%d %d", &row1, &col1);

	printf("Enter rows and column for 2nd matrix: ");
	scanf("%d %d", &row2, &col2);


	while (col1 != row2)
	{
		printf("column of 1st matrix not equal to row of 2nd.\n");
		printf("Enter rows and column for 1st matrix: ");
		scanf("%d %d", &row1, &col1);
		printf("Enter rows and column for 2nd matrix: ");
		scanf("%d %d", &row2, &col2);
	}

	
        inputarr(arr1, arr2, row1, col1, row2, col2);

     
        matrixproduct(arr1, arr2, mult, row1, col1, row2, col2);
        
        printf("\nProduct: \n");
	    for(i = 0; i < row1; ++i)
	    {
	    	for(j = 0; j < col2; ++j)
	    	{
	    		printf("%d  ", mult[i][j]);
	    		if(j == col2 - 1)
	    			printf("\n\n");
	    	}
	    }

     
 

	return 0;
}

void inputarr(int arr1[][10], int arr2[][10], int row1, int col1, int row2, int col2)
{
	int i, j;
	printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < col1; ++j)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i < row2; ++i)
	{
		for(j = 0; j < col2; ++j)
		{
			printf("Enter elements b%d%d: ", i + 1, j + 1);
			scanf("%d", &arr2[i][j]);
		}
	}
}

void matrixproduct(int arr1[][10], int arr2[][10], int mult[][10], int row1, int col1, int row2, int col2)
{
	int i, j, k;

	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < col2; ++j)
		{
			mult[i][j] = 0;
		}
	}
	
	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < col2; ++j)
		{
			for(k=0; k<col1; ++k)
			{
				mult[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
}

