#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE;
    printf("Enter the number of elements : ");
    scanf("%d",&ARR_SIZE);
    int arr[ARR_SIZE];
    int sum=0;
    printf("Enter the elements : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of elements : %d",sum);
    getch();
}