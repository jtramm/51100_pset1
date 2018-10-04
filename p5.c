#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#define M 1000
#define N 1000

double **dmatrix_non_contiguous(size_t m, size_t n)
{
	/* Your code here */
}

double **dmatrix_contiguous(size_t m, size_t n)
{
	/* Your code here */
}

void work_kernel_dynamic(double **U, int m, int n)
{
	int i,j;
	double a = 1.0, b = 0.5, c = 0.0;

	for( i=1; i < (m-1); i++)
		for( j=1; j < (n-1); j++)
		{
			c += ( a * (U[i+1][j] + U[i-1][j]) ) +
				( b * (U[i][j+1] + U[i][j-1]) ) +
				( (1 - (2*a) - (2*b)) * U[i][j] );
		}
	printf("c: %.2f\n", c);
	return;
}

void work_kernel_static(double U[M][N], int m, int n)
{
	int i,j;
	double a = 1.0, b = 0.5, c = 0.0;

	for( i=1; i < (m-1); i++)
		for( j=1; j < (n-1); j++)
		{
			c += ( a * (U[i+1][j] + U[i-1][j]) ) +
				( b * (U[i][j+1] + U[i][j-1]) ) +
				( (1 - (2*a) - (2*b)) * U[i][j] );
		}
	printf("c: %.2f\n", c);
	return;
}

int main(int argc, char * argv[])
{
	int m = 1000;
	int n = 1000;

	/* Declare and allocate your arrays A,B,C */

	/* Initialize arrays */

	/* time A */
	work_kernel_static( A, m, n);

	/* time B */
	work_kernel_dynamic( B, m, n);

	/* time C */
	work_kernel_dynamic( C, m, n);

	/* Print out timing to stdout in seconds for each array */

	/* Free memory*/

	return 0;

}
