// Given key in a sorted array A with distinct values. Write a program to find i, j, k such that A[i] + A[j] + A[k] == key.

#include<stdio.h>
#include<stdlib.h>


void find_indexes(int A[], int n, int key) {
    int i, j, k, count = 0, max_count = 0, max_index = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            for (k = j + 1; k < n; k++) {
                if (A[i] + A[j] + A[k] == key) {
                    count++;
                }
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
    int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int key = 22;
    find_indexes(A, 20, key);
    return 0;
}