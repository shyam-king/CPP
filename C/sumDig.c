#include<stdio.h>

int main()
{
	long N;
	printf("Enter a number: ");
	scanf("%ld", &N);
	int sum = N % 10;
	int lastD = 0;
	while (N)
	{
		lastD = N%10;
		N/=10;	
	}
	sum += lastD;
	printf("The sum is: %ld", sum);
	return 0;	
}
