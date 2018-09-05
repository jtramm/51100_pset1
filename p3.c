#include<stdio.h>
#include<stdlib.h>

double **dmatrix_contiguous(size_t m, size_t n)
{
	/* Your code here */
}

int main(int argc, char **argv){

	size_t m=0,n=0,i,j;
	double **matrix;

	n = atoi(argv[1]);
	m = n;
	matrix = dmatrix_contiguous(m,n);

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			matrix[i][j] = i*n+j;
		}
	}

	printf("Matrix with 1D indexing:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%.1f ", matrix[0][i*n + j]);
		}
		putchar('\n');
	}
	putchar('\n');

	printf("Matrix with 2D indexing:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%.1f ", matrix[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

