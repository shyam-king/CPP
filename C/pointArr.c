#include<stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int A[n];
	int i;
	
	for (i = 0 ;i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", A + i);	
	}
	
	printf("\n");
	int *p = A;
	printf("Array elements:\n");
	for (; p!= &A[n]; p++)
	{
		printf("%d\   t", *p);
	}
	return 0;	
}
