#include<stdio.h>
#include<conio.h>
void main()
{
    int SIZE;
    printf("Enter the size of square matrix : ");
    scanf("%d",&SIZE);
    int matrix[SIZE][SIZE];
    int sum=0;
    printf("Enter the elements of matrix (2D array) :\n");
    for(int i=0;i<SIZE;i++) // rows
    {
        for(int j=0;j<SIZE;j++) // columns
        {
            scanf("%d",&matrix[i][j]); // taking A matrix input
            if(i==j)
            {
                sum+=matrix[i][j]; // Sum of right diagonal
            }
        }
    }
    printf("Sum of right diagonal is : %d",sum); // Displaying sum
    getch();
}