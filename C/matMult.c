#include<stdio.h>

int main()
{
	int r1, c1;
	int r2, c2;
	int n = 0;
	do
	{
		if (n)
			printf("Enter valid rows and colums!\n");
		
		printf("Enter row and column for A: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter row and column for B: ");
		scanf("%d%d", &r2, &c2);
		
		n++;
	} while (r1 * c1 <= 0 || r2 * c2 <= 0 || r1 <= 0 || r2 <=0 || c1 != r2);
	
	int i,j,k;
	int A[r1][c1], B[r2][c2];
	
	printf("Enter elements for matrix A:\n");
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			printf("Enter element (%d,%d): ", i+1, j+1);
			scanf("%d", &A[i][j]);	
		}
		printf("\n");
	}
	
	printf("Enter elements for matrix B:\n");
	for (i = 0; i < r2; i++)
	{
		for (j = 0; j < c2; j++)
		{
			printf("Enter element (%d,%d): ", i+1, j+1);
			scanf("%d", &B[i][j]);	
		}
		printf("\n");
	}
	
	int C[r1][c2];
	
	//multiplication
	for (i = 0; i < r1; i++)
	{
		for (j =0 ; j < c2; j++)
		{
			int sum = 0;
			for (k = 0; k < r2; k++)
				sum += A[i][k] * B[k][j];
			C[i][j] = sum;
		}
	}
	
	printf("The resultant matrix:\n");
	
	for (i= 0 ; i < r1; i++)
	{
		for (j = 0; j < c2; j++)
		{
			printf("%d", C[i][j]);
			if (j != c2 - 1) 
				printf (", ");
		}
		printf("\n");
	}
	
	return 0;	
}
