#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size of the square matrix: ");
	scanf("%d", &n);
	
	printf("Enter the elements of the matrix:\n");
	
	int A[n][n];
	int i, j;
	int *p = &A[0][0];
	
	for (i = 0; i < n; i++)
	{
		for (j=0; j <n;j++)
		{
			printf("Enter element (%d, %d): ", i+1, j+1);
			scanf("%d", p++);
		}
		printf("\n");
	}
	
	printf("The lower diagonal:\n");
	
	for ( i =0; i < n; i++)
	{
		p = A[i];
		for (j = 0; j <= i; j++)
		{
			printf("%d", *(p++));
			if (j!=i)
				printf(", ");
		}
		printf("\n");
	}
	
	return 0;
}
