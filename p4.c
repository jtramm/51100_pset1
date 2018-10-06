#include<stdio.h>
#include<stdlib.h>

double ***d3darr_contiguous(size_t l, size_t m, size_t n)
{
	/* Your code here */
}

int main(int argc, char **argv){

	int i, j, k;
	int n = atoi(argv[1]);

	double ***matrix = d3darr_contiguous(n,n,n);

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				matrix[i][j][k] = n*n*i + n*j +k;
			}
		}
	}

	printf("Matrix with 1D indexing:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				printf("%.1f ", matrix[i][j][k]);
			}
		printf("\n");
		}
	printf("\n");
	}

	printf("Matrix with 3D indexing:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				printf("%.1f ", matrix[0][0][n*n*i + n*j + k]);
			}
		printf("\n");
		}
	printf("\n");
	}

	return 0;
}
