#include<stdio.h>
int factorial(int n);
int number, result;
int main()
{
	printf("input a positive integer:\n");
	scanf("%d", &number);
	result=factorial(number);
	printf("Factorial=%d\n", result);
	return 0;
}
int factorial(int n)
{
	int count, product=1;
	for(count=1; count<=n; count++)
	{
		product=product*count;
	}
	return product;
}
