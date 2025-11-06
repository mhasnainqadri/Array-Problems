#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE;
    printf("Enter number of elements : ");
    scanf("%d",&ARR_SIZE);
    int arr[ARR_SIZE],arr1[ARR_SIZE];
    printf("Enter elements of first array : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]); // Taking arr input
    }
    printf("Enter elements of second array : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr1[i]); // Taking arr1 input
    }
    int MERGED_ARR_SIZE=ARR_SIZE*2;
    int arr2[MERGED_ARR_SIZE]; // Making merged arr
    for(int i=0;i<ARR_SIZE;i++)
    {
        arr2[i]=arr[i]; // Putting arr in arr2
    }
    for(int i=ARR_SIZE;i<MERGED_ARR_SIZE;i++)
    {
        arr2[i]=arr1[i-ARR_SIZE]; // Putting arr1 in arr2
    }
    for(int i=0;i<MERGED_ARR_SIZE;i++)
    {
        if(arr2[i]>arr2[i-1]) // Sorting arr2 in descending
        {
            arr2[i]+=arr2[i-1];
            arr2[i-1]=arr2[i]-arr2[i-1];
            arr2[i]-=arr2[i-1];
            i=0;
        }
    }
    printf("Merged sorted array is : ");
    for(int i=0;i<MERGED_ARR_SIZE;i++)
    {
        printf("%d ",arr2[i]); // Displaying sorted arr2
    }
    getch();
}