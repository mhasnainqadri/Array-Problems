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
    int second_largest=arr2[ARR_SIZE-1]; // Last index of arr2 (largest element of arr)
    for(int i=ARR_SIZE-1;i>=0;i--)
    {
        if(arr2[i]<second_largest)
        {
            second_largest=arr2[i]; // Updating second largest of arr2 (also second largest of arr)
            break;
        }
    }
    printf("Second Largest element : %d",second_largest); // Displaying second largest element of arr2 (also second largest of arr)
    getch();
}