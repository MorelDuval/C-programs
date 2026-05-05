#include<stdio.h>
int max(int a, int b);
int main() 
{
	int a,b,x;
	printf("Input two number:\n");
	scanf("%d%d", &a,&b);
	x-max(a,b);
	printf("max=%d\n", x,a,b);
	return 0;
}
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
