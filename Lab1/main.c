#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sd.h"


void main(void)
{
	srand(time(NULL));
	int i,j,k,n = 10;
	double MatA[n][n], MatB[n][n],MatC[n][n];

	matrix(n, MatA);
	matrix(n, MatB);

	// i,j,k permutaion

	for(i)

	if(n <= 10)
	{
		for(i=0; i < n; i++)
		{
			for(j=0;j<n; j++)
			{
				printf("%.3lf ", MatA[i][j]);
			}
			printf("\n");
		}	
			printf("\n");

		for(i=0; i < n; i++)
		{
			for(j=0;j<n; j++)
			{
				printf("%.3lf ", MatB[i][j]);
			}
			printf("\n");
		}	
	}

}