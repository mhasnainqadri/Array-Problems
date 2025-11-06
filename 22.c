#include<stdio.h>
#include<conio.h>
void main()
{
    int SIZE;
    printf("Enter the size of square matrix : ");
    scanf("%d",&SIZE);
    int matrix[SIZE][SIZE];
    printf("Enter the elements of A matrix (2D array) :\n");
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf("%d",&matrix[i][j]); // taking A matrix input
        }
    }
    printf("Transpose of this matrix is :\n");
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            printf("%d ",matrix[j][i]); // Displaying transpose of matrix ([j][i] instead of usual [i][j])
        }
        printf("\n");
    }
}