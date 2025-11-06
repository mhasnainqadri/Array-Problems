#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE;
    printf("Enter the number of elements : ");
    scanf("%d",&ARR_SIZE);
    int arr[ARR_SIZE];
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse display of array is : ");
    for(int i=ARR_SIZE-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    getch();
}