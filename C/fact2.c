//
#include<stdio.h>
#include<string.h>

void flush(int a, char *b)
{
	int i;
	for ( i = 0; i < a; i++)
	b[i] = 0;	
}

void insert(char a, char*to)
{
	int i;
	for ( i = strlen(to) + 1; i > 0; i--)	
		to[i] = to[i-1];
	to[i] = a;
}

void add(char *num1, char*num2, char*result)
{
	int i,j,carryover = 0;
	for (i = strlen(num2) - 1, j = strlen(num1) - 1; i>=0 && j>=0; i--, j--)
	{
		int num = num2[i] + num1[j] - 48 - 48 + carryover;
		carryover = num / 10;
		num %= 10;
		insert(num + 48, result);
	}	
	
	while (i >=0 )
	{
		int num = num2[i] - 48 + carryover;
		carryover = num / 10;
		num %= 10;
		insert(num + 48, result);
		i--;	
	}
	
	while (j >=0 )
	{
		int num = num1[j] - 48 + carryover;
		carryover = num / 10;
		num %= 10;
		insert(num + 48, result);
		j--;	
	}
	
	if (carryover)
		insert(carryover + 48, result);
}

void multiply(char *a, char *b, char *result)
{
	int i, j, carryover = 0;
	
	char *t;
	if (strlen(a) > strlen(b)) 
	{
		t = a;
		a = b;
		b = t;	
	}
	
	char res[2000], temp[2000], zeroes[2000];
	res[0] = temp[0] = zeroes[0] = 0;
	strcpy(res, "");
	for (i = strlen(a) - 1; i >= 0; i--)
	{
		for (j = strlen(b) - 1; j >=0; j--)
		{
			int num = (b[j] - '0') * (a[i] - '0') + carryover;
			carryover = num / 10;
			num %= 10;
			insert(num + '0', res);
		}
		if (carryover)
			insert(carryover + '0', res);
			
		carryover = 0;
			
		strcat(res, zeroes);
		strcpy(temp, result);
		result[0] = 0;
		add (temp, res, result);
		res[0] = 0;
		insert(48, zeroes);
	}
	
}

void factorial(char * a, char *result)
{
	char tresult[2000]  = "1";
	if ((strcmp(a, "0") == 0 || strcmp(a, "1") == 0) && strlen(a) == 1) 
		strcpy(tresult, "1");
	else
	{
		strcpy(tresult,"1");
		char i[100] = "2";
		int flag = 1;
		while(flag) 
		{
			if (strcmp(i,a) == 0)
				flag = 0;
			multiply(tresult, i, result);
			strcpy(tresult, i);
			i[0] = 0;
			add(tresult, "1", i);
			strcpy(tresult, result);
			result[0] = 0;
		}
	}
	strcpy(result, tresult);
}


int main()
{
	char num1[10], result[2000];
	printf("Enter a number: ");
	scanf("%s", num1);
	flush(sizeof(result), result);
	factorial(num1,  result);
	printf("result: %s", result);
	
	return 0;
}

