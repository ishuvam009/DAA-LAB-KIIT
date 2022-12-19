/* Suppose an array A has n distinct integers. Increasing sequence is given as
 A[1].........A[k] and decreasing sequence is given as A[k+1]........A[n]. 
 Write a program for finding k. */

#include <stdio.h>
#include <stdlib.h>

void find_breakpoint(int A[], int n) {
     for (int i = 0; i < 20; i++) {
        if (A[i] > A[i+1]) {
            printf("%d", i);
            break;
        }
    }
}

int main() {
    int numbers[20] = {1, 2, 3, 4, 31, 30, 29, 28};
    find_breakpoint(numbers, 20);
    return 0;
}