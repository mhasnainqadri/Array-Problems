#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE; // array size variable
    printf("Enter the number of elements : ");
    scanf("%d",&ARR_SIZE); // taking array size input
    int arr[ARR_SIZE];
    printf("Enter the elements : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]); // taking elements input
    }
    printf("Unique elements are : ");
    int repeat; // repeat check variable
    for(int i=0;i<ARR_SIZE;i++)
    {
        repeat=0; // setting repeat to 0
        for(int j=0;j<ARR_SIZE;j++)
        {
            if(i!=j) // if element is not itself
            {
                if(arr[i]==arr[j]) //  if element is repeated
                {
                    repeat++; // repeat counts up
                }
            }
        }
        if(repeat==0) // if repeat never increased
        {
            printf("%d ",arr[i]); // arr[i] is unique (wasn't repeated)
        }
    }
    getch();
}