#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include "sd.h"


void main(int argc, char *argv[])
{
	srand(time(NULL));
	int i,j,k,iter = 5, n = 20, val = 0, avg = 0;
	char *ptr;
	double ** MatA, ** MatB,** Mat1,** Mat2,** Mat3,** Mat4,** Mat5,** Mat6;
	FILE *f;

	if (argc > 1)
	{
		n  = (int) strtol(argv[1], &ptr, 10);
		if (argc >2)
		{
			iter = (int) strtol(argv[2],&ptr, 10);
		}
	}

	f = fopen("Lab1.log", "a+");
	if (f== NULL){printf("Error. File Not Created");}


	fprintf(f, "%d\t",n);

	 
	//Matrix Function returns a N by N square matrix. Below it's called twice 
	//and will store our two text matrices for later calculations
	MatA = matrix(n);
	MatB = matrix(n);
	
	//This Function calls below initialize the C matrcies with zeros
    Mat1 = InitMatrix(n);Mat2 = InitMatrix(n);Mat3 = InitMatrix(n);Mat4 = InitMatrix(n);Mat5 = InitMatrix(n);Mat6 = InitMatrix(n);
	
	//Uncomment line below to verify that you are starting with clean initialized matricies.
	//PrintMatrix(n, Mat1);PrintMatrix(n, Mat2);PrintMatrix(n, Mat3);PrintMatrix(n, Mat4);PrintMatrix(n, Mat5);PrintMatrix(n, Mat6);

	//Run i,j,k iteration of matrix multiplication	
	for(i =0;i<iter;i++)
	{
	val = val + ijk(n,MatA,MatB,Mat1);
	PrintMatrix(n, Mat1);
	}
	avg = (avg + val)/iter;
	fprintf(f, "%d\t",avg);
	//fprintf(f, "Average IJK calculation time for %d by %d Matrix= %d \n", n, n,avg  );
	//printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	
	//Run i,j,k iteration of matrix multiplication	
	for(i =0;i<iter;i++)
	{
	val = val + ikj(n,MatA,MatB,Mat2);
	PrintMatrix(n, Mat2);
	}
	avg = (avg + val)/iter;
	fprintf(f, "%d\t",avg);
	//fprintf(f, "Average IKJ calculation time for %d by %d Matrix= %d \n", n, n,avg  );
	//printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + jik(n,MatA,MatB,Mat3);
	  PrintMatrix(n, Mat3);
	}
	
		avg = (avg + val)/iter;
	fprintf(f, "%d\t",avg);
	//fprintf(f, "Average JIK calculation time for %d by %d Matrix= %d \n", n, n,avg  );
	//printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + jki(n,MatA,MatB,Mat4);
	  PrintMatrix(n, Mat4);
	}
	
	avg = (avg + val)/iter;
	fprintf(f, "%d\t",avg);
	//fprintf(f, "Average JKI calculation time for %d by %d Matrix= %d \n", n, n,avg  );
	//printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + kij(n,MatA,MatB,Mat5);
	  PrintMatrix(n, Mat5);
	}
		avg = (avg + val)/iter;
	fprintf(f, "%d\t",avg);
	//fprintf(f, "Average KIJ calculation time for %d by %d Matrix= %d \n", n, n,avg  );
	//printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;
	
	//Run i,j,k iteration of matrix multiplication
	for(i =0;i<iter;i++)
	{	
	val = val + kji(n,MatA,MatB,Mat6);
	  PrintMatrix(n, Mat6);
	} 
		avg = (avg + val)/6;
	fprintf(f, "%d\t",avg);
	//fprintf(f, "Average KJI calculation time for %d by %d Matrix= %d \n", n, n,avg  );
	//printf("Average calculation time= %d \n", avg);
	avg = 0; val = 0;

	fprintf(f, "\n");

	//Free all memory allocated to matrices created before exiting
	free(MatA);free(MatB);
	free(Mat1);free(Mat2);free(Mat3);free(Mat4);free(Mat5);free(Mat6);
}