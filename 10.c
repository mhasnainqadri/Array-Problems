#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE;
    printf("Enter the number of elements : ");
    scanf("%d",&ARR_SIZE);
    int arr[ARR_SIZE];
    printf("Enter the elements : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]); // taking arr input
    }
    printf("Even elements are : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]); // Displaying Even elements
        }
    }
    printf("\nOdd elements are : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]); // Displaying Odd elements
        }
    }
    getch();
}