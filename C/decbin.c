#include<stdio.h>


int main()
{
	long N; 
	int i;
	printf("Enter a number: ");
	scanf("%ld", &N);
	printf("The binary equivalent is: ");
	for ( i = 15; i >= 0; i--)
		if (N & (1 << i))
			printf("%d", 1);
		else 
			printf("%d", 0);
	
	printf("\nEnter a range of bits in the format a-b: ");
	int a,b;
	scanf("%d-%d", &a, &b);
	
	a--;b--;
	while (a <= b)
	{
		N |= (1 << a);
		a++;
	}
	
	
	printf("Decimal equivalent: %d\n", N);
	printf("Binary equivalent: ");
	for ( i = 15; i >= 0; i--)
		if (N & (1 << i))
			printf("%d", 1);
		else 
			printf("%d", 0);
	
	return 0;
}
