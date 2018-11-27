#include<stdio.h>

int main()
{
	int r,c;
	do
	{
		printf("Enter valid row and column size: ");
		scanf("%d%d", &r, &c);
	} while (r <= 0 || c <= 0);
	
	int i, j;
	int A[r][c], B[r][c];
	
	printf("Enter elements for matrix A:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element (%d,%d): ", i+1, j+1);
			scanf("%d", &A[i][j]);	
		}
		printf("\n");
	}
	
	printf("Enter elements for matrix B:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter element (%d,%d): ", i+1, j+1);
			scanf("%d", &B[i][j]);	
		}
		printf("\n");
	}
	
	printf("The sum of the matrices results in: \n");
	for (i =0 ; i < r; i++)
	for (j = 0; j < c; j++)
	{
		A[i][j] += B[i][j];	
	}
	
	for (i =0 ;i < r; i++)
	{
		for (j =0; j< c; j++)
		{
			printf("%d",A[i][j]);
			if (j != c-1)
				printf (", ");		
		}
		printf("\n");
	}
	return 0;	
}
