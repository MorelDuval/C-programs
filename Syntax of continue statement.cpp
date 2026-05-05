#include<stdio.h>
int main()
{
	int i=-1;
	while(i<=25)
	{
		i=i+1;
		if(i%3==0)
		continue;
		printf("i=%d\t", i);
	}
	return 0;
}
