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
    printf("Your array is : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        printf("%d ",arr[i]); // Displaying raw arr
    }
    for(int i=1;i<ARR_SIZE;i++)
    {
        if(arr[i]>arr[i-1]) // Sorting arr in Descending
        {
            arr[i]+=arr[i-1];
            arr[i-1]=arr[i]-arr[i-1];
            arr[i]-=arr[i-1];
            i=0;
        }
    }
    printf("\nDescending Sorted array is : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        printf("%d ",arr[i]); // Displaying Descending sorted arr
    }
    getch();
}