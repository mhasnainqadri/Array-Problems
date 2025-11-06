#include<stdio.h>
#include<conio.h>
void main()
{
    int ARR_SIZE;
    printf("Enter number of elements : ");
    scanf("%d",&ARR_SIZE);
    int arr[ARR_SIZE];
    printf("Enter the elements : ");
    for(int i=0;i<ARR_SIZE;i++)
    {
        scanf("%d",&arr[i]); // taking arr input
    }
    int freq; // repeat check variable
    for(int i=0;i<ARR_SIZE;i++)
    {
        freq=0; // setting repeat to 0
        for(int j=0;j<ARR_SIZE;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++; // counting up repetitions
            }
        }
        printf("%d appears %d times\n",arr[i],freq); // Displaying Repetitions
    }
    getch();
}