//
#include<stdio.h>
//#include<

 double factorial( double n)
{
	 double s = 1, i;
	for (i = 1; i <= n; i++)
	s *= i;
	return s;
}

void main()
{
	 double a;
	printf("Enter the number: ");
	scanf("%lf", &a);
	printf("The factorial of %lf is %lf", a, factorial(a));	
}
