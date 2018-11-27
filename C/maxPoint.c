#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int A[n];
	printf("Enter elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", A+i);
	}
	
	int *max = A;
	int *p = A+1;
	
	for (; p!= A+n; p++)
	{
		if 	(*p > *max)
			max = p;
	}
	
	printf("The maximum element is: %d", *max);
	
	return 0;	
}
