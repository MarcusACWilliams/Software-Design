#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sd.h"

//Create a N by N matrix, fill it with random numbers and return it to mat
void matrix (int n, double mat[n][n])
{
	
	int i,j;
	
	for(i=0; i < n; i++)
	{
		for(j=0;j< n; j++)
		{
			mat[i][j] = rand()%10;
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
void PrintMatrix(int n,double Mat[n][n]){
	
	int i,j;
	
	if(n <= 10)
	{
		for(i=0; i < n; i++)
		{
			for(j=0;j<n; j++)
			{
				printf("%.3lf ", Mat[i][j]);
			}
			printf("\n");
		}	
			printf("\n");	
	}
}