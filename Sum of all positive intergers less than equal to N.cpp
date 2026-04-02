#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	int count=0;
	printf("Input value of n:\n");
	scanf("%d", &n); 
		while(count<=n)
		{
			sum=sum+count;
			count=count+1;
		}
	printf("sum=%d\n", sum);
	return 0;
}
