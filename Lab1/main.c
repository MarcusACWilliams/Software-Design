#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include "sd.h"


void main(void)
{
	srand(time(NULL));
	int i,j,k, n = 500;
	double MatA[n][n], MatB[n][n],Mat1[n][n],Mat2[n][n],Mat3[n][n],Mat4[n][n],Mat5[n][n],Mat6[n][n];
	struct timeval start,end;

	//Matrix Function returns a N by N square matrix. Below it's called twice 
	//and will store our two text matrices for later calculations
	matrix(n, MatA);
	matrix(n, MatB);
	
	//This Function initializes the C matrcies with zeros
	InitMatrix(n, Mat1);InitMatrix(n, Mat2);InitMatrix(n, Mat3);InitMatrix(n, Mat4);InitMatrix(n, Mat5);InitMatrix(n, Mat6);

	//Uncomment line below to verify that you are starting with clean initialized matricies.
	//PrintMatrix(n, Mat1);PrintMatrix(n, Mat2);PrintMatrix(n, Mat3);PrintMatrix(n, Mat4);PrintMatrix(n, Mat5);PrintMatrix(n, Mat6);


	//Run i,j,k iteration of matrix multiplication	
	ijk(n,MatA,MatB,Mat1);
	 PrintMatrix(n, Mat1);
	//Run i,j,k iteration of matrix multiplication	
	ikj(n,MatA,MatB,Mat2);
	  PrintMatrix(n, Mat2);
	//Run i,j,k iteration of matrix multiplication	
	jik(n,MatA,MatB,Mat3);
	  PrintMatrix(n, Mat3);
	//Run i,j,k iteration of matrix multiplication	
	jki(n,MatA,MatB,Mat4);
	  PrintMatrix(n, Mat4);
	//Run i,j,k iteration of matrix multiplication	
	kij(n,MatA,MatB,Mat5);
	  PrintMatrix(n, Mat5);
	//Run i,j,k iteration of matrix multiplication	
	kji(n,MatA,MatB,Mat6);
	  PrintMatrix(n, Mat6);


}