#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	int *p, *q;
	p = &a;
	q = &b;
	printf("The sum of the two numbers is: %d", *p + *q);
	return 0;	
}
