/* WAP that takes 3 variables(a,b,c) as separate parameters and rotate the values 
stores so that a goes to b, b to c and c to a. By using swap(int, int), that swap 
exchanges the nos x and y. */

#include <stdio.h>
#include <stdlib.h>

void swap(int frst, int snd, int thrd)
{
    int frth = frst;
    frst = thrd;
    thrd = snd;
    snd = frth;
    printf("\nGiven three values after swapping are-->  a = %d, b= %d, c= %d.\n", frst, snd, thrd);
}

int main()
{
    int a, b, c;
    printf("\nEnter the value of a, b, and c--> ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nGiven three values are-->  a = %d, b= %d, c= %d.\n", a, b, c);
    swap(a, b, c);
    return 0;
}