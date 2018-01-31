#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include "sd.h"


void main(int argc, char *argv[])
{
	srand(time(NULL));
	int i,j,k,iter = 10, n = 10;
	int val = 0, avg = 0;
	char *ptr;
	
//	double MatA[n][n], MatB[n][n],Mat1[n][n],Mat2[n][n],Mat3[n][n],Mat4[n][n],Mat5[n][n],Mat6[n][n];

	if (argc > 1)
	{
		
		n  = (int) strtol(argv[1], &ptr, 10);
		if (argc >2)
		{
			iter = (int) strtol(argv[2],&ptr, 10);
		}
	}
	
    double **MatA = (double **)malloc(n * sizeof(double *));//This line determines the number of columns in the matrix (N)
    for (i=0; i<n; i++)
         MatA[i] = (double *)malloc(n * sizeof(double));//This line determines the number of rows for every column in the matrix (M)
	 
	double **MatB = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         MatB[i] = (double *)malloc(n * sizeof(double));
	 
	double **Mat1 = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         Mat1[i] = (double *)malloc(n * sizeof(double));
	 
	double **Mat2 = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         Mat2[i] = (double *)malloc(n * sizeof(double));
	 
	double **Mat3 = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         Mat3[i] = (double *)malloc(n * sizeof(double));
	 
	 	double **Mat4 = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         Mat4[i] = (double *)malloc(n * sizeof(double));
	 
	 	double **Mat5 = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         Mat5[i] = (double *)malloc(n * sizeof(double));
	 
	 	double **Mat6 = (double **)malloc(n * sizeof(double *));
    for (i=0; i<n; i++)
         Mat6[i] = (double *)malloc(n * sizeof(double));
	 
	//Matrix Function returns a N by N square matrix. Below it's called twice 
	//and will store our two text matrices for later calculations
	matrix(n, MatA);
	matrix(n, MatB);
	
	//This Function initializes the C matrcies with zeros
	InitMatrix(n, Mat1);//InitMatrix(n, Mat2);InitMatrix(n, Mat3);InitMatrix(n, Mat4);InitMatrix(n, Mat5);InitMatrix(n, Mat6);

	//Uncomment line below to verify that you are starting with clean initialized matricies.
	//PrintMatrix(n, Mat1);PrintMatrix(n, Mat2);PrintMatrix(n, Mat3);PrintMatrix(n, Mat4);PrintMatrix(n, Mat5);PrintMatrix(n, Mat6);


	//Run i,j,k iteration of matrix multiplication	
	for(i =0;i<iter;i++)
	{
	val = val + ijk(n,MatA,MatB,Mat1);
	PrintMatrix(n, Mat1);
	}
	avg = (avg + val)/iter;
	printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	
	
	//Run i,j,k iteration of matrix multiplication	
	for(i =0;i<iter;i++)
	{
	val = val + ikj(n,MatA,MatB,Mat2);
	PrintMatrix(n, Mat2);
	}
	avg = (avg + val)/iter;
	printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + jik(n,MatA,MatB,Mat3);
	  PrintMatrix(n, Mat3);
	}
	
		avg = (avg + val)/iter;
	printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + jki(n,MatA,MatB,Mat4);
	  PrintMatrix(n, Mat4);
	}
	
	avg = (avg + val)/iter;
	printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + kij(n,MatA,MatB,Mat5);
	  PrintMatrix(n, Mat5);
	}
		avg = (avg + val)/iter;
	printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + kji(n,MatA,MatB,Mat6);
	  PrintMatrix(n, Mat6);
	} 
		avg = (avg + val)/6;
	printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	free(Mat1);free(Mat2);free(Mat3);free(Mat4);free(Mat5);free(Mat6);
	free(MatA);free(MatB);
}