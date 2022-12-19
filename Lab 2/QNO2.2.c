/* Write a program to rearrange the elements of an array of n integers, such that all
 the even numbers are followed by all odd numbers. How many different ways you can 
 solve this problem. Write your approaches and strategy for solving this problem. */

#include<stdio.h>

void swap(int *a, int *b);
 
void EvenOdd(int arr[], int size)
{

    int left = 0, right = size-1;
    while (left < right)
    {
        
        while (arr[left]%2 == 0 && left < right)
            left++;
 
        
        while (arr[right]%2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
            
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
 

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 

int main()
{
    int arr[] = {2, 1, 4, 5, 6, 9, 55};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
  
    EvenOdd(arr, arr_size);
 
    printf("Array after segregation ");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
 
    return 0;
}