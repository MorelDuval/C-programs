#include<stdio.h>
int main () {
	float a, b, c,  average;
	
	printf("Enter first digit:\n");
	scanf("%f",&a);
	
	printf("Enter second digit:\n");
	scanf("%f",&b);
	
	printf("Enter third digit:\n");
	scanf("%f",&c);
	
	average= (a+b+c)/3;

	printf("The average is\n%2f", average);
	
	return 0;
}

