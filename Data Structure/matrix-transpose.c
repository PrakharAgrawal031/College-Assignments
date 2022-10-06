#include<stdio.h>
void main(){
    int row,column,i,j,mat[100][100],transpose[100][100];

    printf("Enter number of rows of matrix : ");
    scanf("%d",&row);
    printf("Enter number of columns of matrix : ");
    scanf("%d",&column);
    
    printf("#### Matrix ####\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter element a %d%d : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            transpose[i][j] = mat[j][i];
        }
    }
    
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    
}