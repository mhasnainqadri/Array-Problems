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
    int second_smallest=arr2[0]; // Last index of arr2 (largest element of arr)
    for(int i=0;i<ARR_SIZE;i++)
    {
        if(arr2[i]>second_smallest)
        {
            second_smallest=arr2[i]; // Updating second smallest of arr2 (also second smallest of arr)
            break;
        }
    }
    printf("Second Smallest element : %d",second_smallest); // Displaying second smallest element of arr2 (also second smallest of arr)
    getch();
}