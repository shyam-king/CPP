//
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	int n;
	printf("Enter number of lines: ");
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		//spacing in front
		for (j = 1; j <= n-i; j++)
			printf("  ");
	
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		j-=2;
		while (j >= 1)
		{
			printf("%d ", j);
			j--;
		}
		printf("\n");
	}
	return 0;	
}
