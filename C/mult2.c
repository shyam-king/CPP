#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, mult;
	//using while loop
	num = 1; 
	while (num <= 10)
	{
		mult = 1;
		while ( mult <= 10)
		{
			printf("%d * %d = %d\n", num, mult, num*mult);
			mult++;
		}
		printf("\n");
		system("PAUSE");
		num++;
	}
	return 0;	
}
