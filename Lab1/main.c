#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sd.h"


void main(void)
{
	srand(time(NULL));
	int i,j,k,n = 10;
	double MatA[n][n], MatB[n][n],MatC[n][n];

	//Matrix Function returns a N by N square matrix. Below it's called twice 
	//and will store our two text matrices for later calculations
	matrix(n, MatA);
	matrix(n, MatB);
	
	//This Function initializes the C matrix with zeros
	InitMatrix(n, MatC);
	
	// i,j,k permutaion
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

		PrintMatrix(n,MatA);
		PrintMatrix(n,MatB);
		PrintMatrix(n,MatC );

	//If matrix size is less than 10 by 10 print out each matrix


}