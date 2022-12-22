#include <stdio.h>
#include <stdlib.h>


#define M 4
#define N 4


int countNumberNonZeroElement(int* matrix){
	int nonezero=0;
	int i=0;
	int j=0;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if((matrix + i*N)[j]!=0){
				nonezero++;
			}
		}
	}
	return nonezero;
}




int main() {
	int nonezero;
    int* matrix = (int*)malloc(M * N * sizeof(int));
    int r,c;
	int number;
 
    // assign values to the allocated memory
    for ( r = 0; r < M; r++){
        for ( c = 0; c < N; c++) {
			scanf("%d",&number);
            *(matrix + r*N + c) = number;
        }
    }
	nonezero=countNumberNonZeroElement(matrix);
	printf("\nNo of non zero elements: %d\n\n",nonezero);


    // deallocate memory
    free(matrix);


	getchar();
	getchar();
	return 0;
}