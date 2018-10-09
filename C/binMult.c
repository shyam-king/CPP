#include<stdio.h>

void printBin(int N)
{
	int i;
	for ( i = 15; i >= 0; i--)
		if (N & (1 << i))
			printf("%d", 1);
		else 
			printf("%d", 0);
}

void binAdd(int A, int B, int *R)
{
	*R = 0;
	int i, carry = 0;
	for (i = 0; i < 16; i++)
	{
		*R |= (A & (1 << i)) ^ (B & (1 << i)) ^ (carry & (1 << i)) ;
		int a,b,c;
		a = (A & (1 << i));
		b = (B & (1 << i));
		c = (carry & (1 << i));
		carry |= (( (a & b ) | (a & c) | (b & c)) & (1 << i)) << (1);
	}
}

void binMulti(int A, int B, int *R)
{
	*R = 0; 
	int i;
	for (i = 0; i < 8; i++)
	{
		int t = *R;
		if (B & (1 << i))
			binAdd(A, t, R);
		A <<= 1;	
	}
}

int main()
{
	printf("Enter two numbers (max 255): ");
	int A,B,R;
	scanf("%d%d" , &A, &B);
	binMulti(A,B,&R);
	printf ("Number 1:\t%d\t:", A);
	printBin(A);
	printf ("\nNumber 2:\t%d\t:", B);
	printBin(B);
	
	printf ("\nResult  :\t%d\t:", R);
	printBin(R);
	
	return 0;	
}
