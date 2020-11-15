#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void out(int a, int b, int c, int d)
{
	int sumodd, sumeven;
	
	sumodd = a + b;
	sumeven = c + d;

	if (a % 2 != 0 && b % 2 != 0)
	{
		printf("Sum odd = %d\n", sumodd);
	} else
	{
		printf("Not odd number\n");
	}

	if (c % 2 == 0 && d % 2 == 0)
	{
		printf("Sum even = %d\n", sumeven);
	} else
	{
		printf("Not even number\n");
	}

}

int main()
{
	int* number1, * number2, * number3, * number4, n1, n2, n3, n4;
	number1 = &n1;
	number2 = &n2;
	number3 = &n3;
	number4 = &n4;
	char in[4][30] = { "Odd Number","Odd","Even Number","Even" };

	int x[4];
	int y;
	for (y = 0; y < 4; y++)
	{
		printf("Input %s : ", in[y]);
		scanf_s("%d", &x[y]);
	}

	out(x[0], x[1], x[2], x[3]);
}