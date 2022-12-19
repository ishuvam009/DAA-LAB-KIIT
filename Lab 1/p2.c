// Write a program for finding i and j in an array A for any key such that A[j]2 + A[i]2 == key 

#include<stdio.h>
#include<stdlib.h>


void find_indexes(int A[], int n, int key) {
    int i, j, count = 0, max_count = 0, max_index = 0;
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (A[i] + A[j] == key) {
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
    int A[20] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 3, 4, 5, 6, 7, 8, 9, 10, 3, 1};
    int key = 25;
    find_indexes(A, 20, key);
    return 0;
}