#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE;
    printf("Enter the number of elements : ");
    scanf("%d",&ARR_SIZE); // Taking arr size input
    int arr[ARR_SIZE];
    printf("Enter the elements : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]); // Taking arr input
    }
    int duplicates=0; // Duplicate Variable
    for(int i=0;i<ARR_SIZE;i++)
    {
        for(int j=i+1;j<ARR_SIZE;j++)
        {
            if(arr[i]==arr[j]) // Checking if Element is repeated
            {
                duplicates++; // Increasing Duplicates
                break;
            }
        }
    }
    printf("Number of duplicates is : %d",duplicates);
    getch();
}