#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sd.h"


void main(void)
{

	double mat[10][10];
	int i, j,n = 10;

	matrix(10, mat);

	for(i=0; i < n; i++)
	{
		for(j=0;j<n; j++)
		{
			printf("%.3lf ", mat[i][j]);
		}
		printf("\n");
	}	


}