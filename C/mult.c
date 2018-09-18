//
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, mult;
	//using for loop
	for (num = 1; num <= 10; num++)
	{
		for (mult = 1; mult <= 10; mult ++)
		{
			printf("%d * %d = %d\n", num, mult, num*mult);
		}
		printf("\n");
		system("PAUSE");
	}
	return 0;	
}
