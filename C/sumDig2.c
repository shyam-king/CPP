#include<stdio.h>
#include<string.h>

int main()
{
	char num[1000];
	printf("Enter a number: ");
	scanf("%s", num);
	int sum = num[0] + num[strlen(num) - 1] - 48 - 48;
	printf("The sum is : %d", sum); 	
	return 0;
}
