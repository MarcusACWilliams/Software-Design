#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include "sd.h"

//Create a N by N matrix, fill it with random doubles and return it to mat
void matrix (int n, double mat[n][n])
{
	
	int i,j;
	
	for(i=0; i < n; i++)
	{
		for(j=0;j< n; j++)
		{
			mat[i][j] = (double)rand()/ RAND_MAX*200.0 - 100.0;
		}
	}

}

//Initilize a matrix with all zeros
void InitMatrix(int n, double mat[n][n])
{
	int i,j;

	for(i=0; i < n; i++)
	{
		for(j=0;j< n; j++)
		{
			mat[i][j] = 0.0;
		}
	}
}

//Print a given matrix in Column row format
void PrintMatrix(int n,double mat[n][n]){
	
	int i,j;
	
	if(n <= 10)
	{
		for(i=0; i < n; i++)
		{
			for(j=0;j<n; j++)
			{
				printf("%.3lf ", mat[i][j]);
			}
			printf("\n");
		}	
			printf("\n");	
	}
}

	// i,j,k permutaion 1 of 6
void ijk(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	struct timeval start,end;

	gettimeofday(&start, NULL);	

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < n; k++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[k][j]);
			}
		}
	}

	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
}

	// i,k,j permutaion 2 of 6
void ikj(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	struct timeval start,end;
	gettimeofday(&start, NULL);

	for(i = 0; i < n; i++)
	{
		for(k = 0; k < n; k++)
		{
			for(j = 0; j < n; j++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[k][j]);
			}
		}
	}
	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
}

	// j,i,k permutaion 3 of 6
void jik(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	struct timeval start,end;
	gettimeofday(&start, NULL);

	for(j = 0; j < n; j++)
	{
		for(i = 0; i < n; i++)
		{
			for(k = 0; k < n; k++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[k][j]);
			}
		}
	}
	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
}

	// j,k,i permutaion 4 of 6
void jki(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	struct timeval start,end;
	gettimeofday(&start, NULL);
	
	for(j = 0; j < n; j++)
	{
		for(k = 0; k < n; k++)
		{
			for(i = 0; i < n; i++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[k][j]);
			}
		}
	}
	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
}
 
	// k,i,j permutaion 5 of 6
void kij(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	struct timeval start,end;
	gettimeofday(&start, NULL);
	
	for(k = 0; k < n; k++)
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[k][j]);
			}
		}
	}
	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
}

	// k,j,i permutaion 6 of 6
void kji(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	struct timeval start,end;
	gettimeofday(&start, NULL);
	
	for(k = 0; k < n; k++)
	{
		for(j = 0; j < n; j++)
		{
			for(i = 0; i < n; i++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[k][j]);
			}
		}
	}
	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
}