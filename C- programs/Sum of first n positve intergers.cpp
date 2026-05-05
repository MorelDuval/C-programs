#include<stdio.h>
int main()
{
	int n, i;
	int sum=0;
	printf("Enter an Integer n: ");
	scanf("%d", &n);
	
	if (n<=0)
	{
		printf("Enter a number that is greater than 0.\n");
	}
	else
	{
		for(i=1; i<=n; i++)
		{
			sum+=i;
		}
		printf("The sum of all integers up to %d is: %d\n", n, sum);
	}
	return 0;
} 
