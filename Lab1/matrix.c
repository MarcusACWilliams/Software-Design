#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sd.h"

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

	/*	for(i=0; i < n; i++)
		{
			for(j=0;j<n; j++)
			{
				printf("%.3lf ", MatB[i][j]);
			}
			printf("\n");
		}
			printf("\n");

		for(i=0; i < n; i++)
		{
			for(j=0;j<n; j++)
			{
				printf("%.3lf ", MatC[i][j]);
			}
			printf("\n");
		} 
	*/	
	}
}