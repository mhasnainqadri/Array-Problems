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
        scanf("%d",&arr[i]); // Inputting arr
    }
    int arr2[ARR_SIZE]; // New array
    for(int i=0;i<ARR_SIZE;i++)
    {
        arr2[i]=arr[i]; // Copying elements of arr into arr2
    }
    printf("Your array : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        printf("%d ",arr[i]); // Displaying arr
    }
    printf("\nCopy array : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        printf("%d ",arr2[i]); // Displaying arr2
    }
    getch();
}