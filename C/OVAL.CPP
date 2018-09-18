#include<stdio.h>
#include<conio.h>

int main()
{
	clrscr();
	double a, b;
	printf("Enter xwidth:");
	scanf("%lf", &a);
	printf("Enter ywidth:");
	scanf("%lf", &b);

	clrscr();
	double y = -12, x = -39;
	for (x = -40; x <= 39; x++)
	{
		for (y = -12; y <= 12; y++)
		{
		//printf("%lf,%lf: %lf\n", x,y, (x*x) / (a*a) + (y * y) / (b*b) ) ;
		if ((x*x) / (a*a) + (y * y) / (b*b) <= 1)
		{
			gotoxy (40 + x,12 + y);
			printf("*");
		}
		//getch();
		}
	}
 getch();
 return 0;
}