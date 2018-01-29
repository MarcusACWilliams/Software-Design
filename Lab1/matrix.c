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