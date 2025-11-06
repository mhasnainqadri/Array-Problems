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
        scanf("%d",&arr[i]);
    }
    int insert;
    printf("Enter the element to be inserted : ");
    scanf("%d",&insert);
    for(int i=1;i<ARR_SIZE;i++)
    {
        if(arr[i]<arr[i-1]) // Sorting arr in Ascending
        {
            arr[i]+=arr[i-1];
            arr[i-1]=arr[i]-arr[i-1];
            arr[i]-=arr[i-1];
            i=0;
        }
    }
    ARR_SIZE++; // increasing size of array to adjust the inserted element
    arr[ARR_SIZE-1]=insert; // inserting element
    for(int i=1;i<ARR_SIZE;i++)
    {
        if(arr[i]<arr[i-1]) // Sorting arr in Ascending
        {
            arr[i]+=arr[i-1];
            arr[i-1]=arr[i]-arr[i-1];
            arr[i]-=arr[i-1];
            i=0;
        }
    }
    printf("After inserting element : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        printf("%d ",arr[i]); // Displaying final arr
    }
    getch();
}