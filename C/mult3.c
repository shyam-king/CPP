#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, mult;
	//using do while loop
	num = 1; 
	do
	{
		mult = 1;
		do 
		{
			printf("%d * %d = %d\n", num, mult, num*mult);
			mult++;
		} while (mult <= 10);
		printf("\n");
		system("PAUSE");
		num++;
	} while (num <= 10);
	return 0;	
}
