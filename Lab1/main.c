#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include "sd.h"


void main(void)
{
	srand(time(NULL));
	int i,j,k, n = 10;
	double MatA[n][n], MatB[n][n],Mat1[n][n],Mat2[n][n],Mat3[n][n],Mat4[n][n],Mat5[n][n],Mat6[n][n];
	struct timeval start,end;

	//Matrix Function returns a N by N square matrix. Below it's called twice 
	//and will store our two text matrices for later calculations
	matrix(n, MatA);
	matrix(n, MatB);
	
	//This Function initializes the C matrix with zeros
	InitMatrix(n, Mat1);InitMatrix(n, Mat2);InitMatrix(n, Mat3);InitMatrix(n, Mat4);InitMatrix(n, Mat5);InitMatrix(n, Mat6);
	
	//Run i,j,k iteration of matrix multiplication	
	gettimeofday(&start, NULL);
	ijk(n,MatA,MatB,Mat1);
	gettimeofday(&end, NULL);
	
	printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	 - (start.tv_sec * 1000000 + start.tv_usec)));
	 
		//Run i,j,k iteration of matrix multiplication	
	gettimeofday(&start, NULL);
	ikj(n,MatA,MatB,Mat2);
	gettimeofday(&end, NULL);
	
		  printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	  - (start.tv_sec * 1000000 + start.tv_usec)));
	  
		//Run i,j,k iteration of matrix multiplication	
	gettimeofday(&start, NULL);
	jik(n,MatA,MatB,Mat3);
	gettimeofday(&end, NULL);
	
		  printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	  - (start.tv_sec * 1000000 + start.tv_usec)));
	  
		//Run i,j,k iteration of matrix multiplication	
	gettimeofday(&start, NULL);
	jki(n,MatA,MatB,Mat4);
	gettimeofday(&end, NULL);
	
		  printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	  - (start.tv_sec * 1000000 + start.tv_usec)));
	  
		//Run i,j,k iteration of matrix multiplication	
	gettimeofday(&start, NULL);
	kij(n,MatA,MatB,Mat5);
	gettimeofday(&end, NULL);
	
		  printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	  - (start.tv_sec * 1000000 + start.tv_usec)));
	  
		//Run i,j,k iteration of matrix multiplication	
	gettimeofday(&start, NULL);
	kji(n,MatA,MatB,Mat6);
	gettimeofday(&end, NULL);
	
		  printf("\n%ld\n\n", ((end.tv_sec * 1000000 + end.tv_usec)
	  - (start.tv_sec * 1000000 + start.tv_usec)));
	
		  
		//PrintMatrix(n,MatA);
		//PrintMatrix(n,MatB);
		PrintMatrix(n,Mat1 );


}