#include<stdio.h>
int main() 
{
	int a, b, sum, product;
	printf("Enter a first digit: ");
	scanf("%d", &a);
	
	printf("Enter a second digit: ");
	scanf("%d", &b);
	
	sum= a+b;
	printf("The sum of the two digits inputed is %d\n", sum);

	product= a*b;
	printf("\nThe product of the two digits inputed is %d\n", product);
	
	return 0;
}
