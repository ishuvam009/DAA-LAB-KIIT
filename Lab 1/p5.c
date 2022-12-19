/* Write a program to display an array of n integers (n>1) in O(n) time, 
where at every index of the array should contain the product of all elements in 
the array except the element at the given index. No additional array declaration is 
allowed. */

// Example: Input : 10, 4, 1, 6, 2 Output : 48,120,480,80,240

#include <stdio.h>
#include <stdlib.h>

void find_products(int A[], int n) {
    int i, j, prod = 1;
    for (i = 0; i < n; i++) {
        prod *= A[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d ", prod / A[i]);
    }
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    find_products(A, 10);
    return 0;
}