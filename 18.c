#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix[3][3];
    printf("Enter the elements of 3x3 matrix (2D array) :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]); // taking matrix input
        }
    }
    printf("Your Matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]); // Displaying matrix
        }
        printf("\n"); // line break
    }
    getch();
}