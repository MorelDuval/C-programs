#include<stdio.h>
int main() {
	float a,b,c, average;
	printf("Enter first digit: ");
	scanf("%f",&a);
	printf("Enter second digit: ");
	scanf("%f",&b);
	printf("Enter third digit: ");
	scanf("%f",&c);
	
	average=(a+b+c)/3;
	
	printf("The average is %f: ", average) ;
	
	return 0;
}

