#include<stdio.h>

int main()
{
	int a,b;
	int *p = &a, *q = &b;
	printf("Enter two numbers: ");
	scanf("%d%d", p, q);
	
	printf ("Enter operation +,-,/,* : ");
	char o;
	scanf(" %c", &o);
	
	switch(o)
	{
		case '+':
			printf("The sum is %d", *p + *q);
			break;
		case '-':
			printf("The difference is %d", *p - *q);
			break;
		case '*':
			printf("The product is %d", *p * *q);
			break;
		case '/':
			printf("The quotient is %d", *p / *q);
			break;
		default:
			printf("Invalid operation!");	
	}
	
	return 0;
}
