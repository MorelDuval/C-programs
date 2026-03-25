#include <stdio.h>
int main()
{
	int i, fact=1, num;
	printf("Enter the number\n");
	scanf("%d", &num);
	
	if(num<0)
	{
		printf("There is no fact for negative number\n");
	}
	
	else
	if(num==0 || num==1)
	{
	fact=1;	
	}
	
	else
	{
		for (i=1; i<=num; i++)
		fact=fact*i;
	}
	printf("Factorial of %d is = %d\n", num, fact);
	return 0;
}
