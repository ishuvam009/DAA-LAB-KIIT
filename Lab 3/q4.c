#include<stdio.h>

int non_zero(int arr[][10],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != 0) count++;
        }
    }
    return count;
}

int leading_sum(int arr[][10],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j < n-1){
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int minor_sum(int arr[][10],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j > n-1){
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int diagonal_product(int arr[][10],int n){
    int prod = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j || i+j == n-1){
                prod *= arr[i][j];
            }
        }
    }
    return prod;
}

int main(){
    const int n = 3;
    int arr[n][10];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    
    printf("Non Zero: %d\n",non_zero(arr,n));
    printf("Above Leading Diagonal Sum: %d\n",leading_sum(arr,n));
    printf("Below Minor Diagonal Sum: %d\n",minor_sum(arr,n));
    printf("Diagonal Product: %d\n",diagonal_product(arr,n));
    return 0;
}