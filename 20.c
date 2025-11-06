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
    int matrix1[SIZE][SIZE];
    printf("Enter the elements of B matrix (2D array) :\n");
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf("%d",&matrix1[i][j]); // taking B matrix input
        }
    }
    int matrix2[SIZE][SIZE]; // Difference Matrix
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            matrix2[i][j]=matrix[i][j]-matrix1[i][j]; // Subtractin matrix B from matrix A and storing difference in matrix2
        }
    }
    printf("Sum of Matrices is :\n");
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            printf("%d ",matrix2[i][j]); // Displaying matrix2
        }
        printf("\n"); // line break
    }
    getch();
}