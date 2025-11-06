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
    int min=arr[0],max=arr[0]; // initializing min and max with first element
    for(int i=0;i<ARR_SIZE;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i]; // updating min is arr[i] is smaller
        }
        if(arr[i]>max)
        {
            max=arr[i]; // updating max is arr[i] is greater
        }
    }
    printf("Minimum Element : %d\nMaximum Element : %d",min,max);
    getch();
}