#include<stdio.h>
#include<stdlib.h>

double **dmatrix_non_contiguous(size_t m, size_t n)
{
	/* Your code here */
}

int main(int argc,char **argv){

	size_t m=0,n=0,i,j;
	double **matrix; 

	n = atoi(argv[1]);
	m = n;
	matrix = dmatrix_non_contiguous(n,n);

	/* Test fill */
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			matrix[i][j] = n*i+j;
		}
	}

	/* Print matrix */
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%.1f ", matrix[i][j]);
		}
		putchar('\n');
	}
	return 0;
}

