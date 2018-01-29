#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include "sd.h"


void main(void)
{
	srand(time(NULL));
	int i,j,k,n = 10;
	double MatA[n][n], MatB[n][n],MatC[n][n];
	struct timeval start,end;

	//Matrix Function returns a N by N square matrix. Below it's called twice 
	//and will store our two text matrices for later calculations
	matrix(n, MatA);
	matrix(n, MatB);
	
	//This Function initializes the C matrix with zeros
	InitMatrix(n, MatC);
	
	gettimeofday(&start, NULL);
	//Run i,j,k iteration of matrix multiplication
	ijk(n,MatA,MatB,MatC);
	gettimeofday(&end, NULL);
	
	  printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	  - (start.tv_sec * 1000000 + start.tv_usec)));
		  
		PrintMatrix(n,MatA);
		PrintMatrix(n,MatB);
		PrintMatrix(n,MatC );

	//If matrix size is less than 10 by 10 print out each matrix


}