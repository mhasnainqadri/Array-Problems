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
    for(int i=1;i<ARR_SIZE;i++)
    {
        if(arr2[i]<arr2[i-1]) // Sorting arr2 in Ascending order
        {
            arr2[i]+=arr2[i-1];
            arr2[i-1]=arr2[i]-arr2[i-1];
            arr2[i]-=arr2[i-1];
            i=0;
        }
    }
    printf("Second Smallest element : %d",arr2[1]); // Displaying 2nd value of sorted arr2 (2nd smallest element of arr)
    getch();
}