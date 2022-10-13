
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int add(int x, int y)
{
	int z = x + y;
	return z;
}


int main()
{
	int num1 = 10;
	int num2 = 20;
	int a = 100;
	int b = 200;
	int sum = 0;
	int sum1 = 0;
	sum1 = add(a, b);
	sum = add(num1, num2);
	printf("%d\n", sum);
	printf("%d\n", sum1);
	return 0;
}