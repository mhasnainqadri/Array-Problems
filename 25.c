#include<stdio.h>
#include<conio.h>
void main()
{
    int SIZE;
    printf("Enter the size of square matrix : ");
    scanf("%d",&SIZE);
    int matrix[SIZE][SIZE];
    int row_sum[SIZE];
    int col_sum[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        row_sum[i]=0; // Setting all elements to 0 to add sum in them
    }
    for(int i=0;i<SIZE;i++)
    {
        col_sum[i]=0; // Setting all elements to 0 to add sum in them
    }
    printf("Enter the elements of matrix :\n");
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            scanf("%d",&matrix[i][j]); // Taking matrix input
            row_sum[i]+=matrix[i][j]; // Adding sum of row elements
        }
    }
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            col_sum[i]+=matrix[j][i]; // Adding sum of column elements
        }
    }
    printf("Sum of rows :\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("Row %d = %d\n",i+1,row_sum[i]); // Displaying sum of row elements
    }
    printf("Sum of columns :\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("Column %d = %d\n",i+1,col_sum[i]); // Displaying sum of column elements
    }
    getch();
}