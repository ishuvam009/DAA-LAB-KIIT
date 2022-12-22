/* Write a program to store random numbers into an array of n integers, find out the 
smallest and largest number stored in it. N is inputted by the user. */

#include <stdio.h>

void findMinMax(int arr[], int N)
{
    int i;
    int min = arr[0], max = arr[0];

    for (i = 0; i < N; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("\nMinimum element is %d.", min);
    printf("\n");
    printf("Maximum element is %d.", max);
}
int main()
{
    int i;
    int N;
    printf("Enter size of array: "); 
    scanf("%d",&N);
    int arr[N];
    printf("Enter integer elements of the array:- \n"); 
    for(i=0;i<N;i++) 
    { 
        printf("Enter %d no. element: ",i+1); 
        scanf("%d",&arr[i]); 
    } 

    findMinMax(arr, N);
    return 0;
}