#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	int count=1;
	printf(" Input value of n:\n");
	scanf("%d", &n);
	do
	{
		sum=sum+count;
		count=count+1;
	}
	while(count<=n);
	printf("sum=%d\n",sum);
	return 0;
}
