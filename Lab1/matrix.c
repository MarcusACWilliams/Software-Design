#include <stdio.h>
#include <time.h>
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

	// i,j,k permutaion
void ijk(int n, double MatA[n][n],double MatB[n][n],double MatC[n][n])
{
	int i,j,k;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			for(k = 0; k < n; k++)
			{
				MatC[i][j] = MatC[i][j] + (MatA[i][k]*MatB[j][k]);
			}
		}
	}
}