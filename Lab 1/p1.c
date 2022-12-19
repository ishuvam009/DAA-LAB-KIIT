/*  Given an array. Let us assume that there can be duplicates element. 
Write a program to find an element in the list in such a way that we get 
the highest frequency if there are duplicates.    */

#include<stdio.h>
#include<stdlib.h>

void find_duplicates(int A[], int n) {
    int i, j, count = 0, max_count = 0, max_index = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (A[i] == A[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_index = i;
        }
    }
    printf("%d", A[max_index]);
}

int main() {
    int numbers[20] = {2, 3, 2, 5, 6, 7, 2, 9, 2, 3,7,9,4,2,1,2,6,2};
    find_duplicates(numbers, 20);
    return 0;
}