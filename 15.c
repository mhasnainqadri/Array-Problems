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
        printf("%d ",arr[i]); // Displaying raw
    }
    int target;
    printf("\nEnter the position of element that you want to delete : ");
    scanf("%d",&target);
    for(int i=target-1;i<ARR_SIZE;i++) // Bringing target element to the last index
    {
        arr[i]+=arr[i+1];
        arr[i+1]=arr[i]-arr[i+1];
        arr[i]-=arr[i+1];
    }
    ARR_SIZE--; // Deleting last index by decreasing arr size
    printf("Updated array is : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        printf("%d ",arr[i]); // Displaying updated arr
    }
    getch();
}