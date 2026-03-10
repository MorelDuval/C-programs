#include<stdio.h>
int main() {
	int a, b, c;
printf("Enter first number\n");
scanf("%d",&a);

printf("Enter second number\n");
scanf("%d",&b);

printf("Enter third number\n");
scanf("%d",&c);

if (a>b>c)
printf("%d is greater than %d and %d", a, b, c);

else
printf("%d is greater than %d and %d", c, b, a);

if (c>a>b)
printf("%d is greater than %d and %d", c, a, b);

else
printf("%d is greater than %d and %d", b, a);

}
