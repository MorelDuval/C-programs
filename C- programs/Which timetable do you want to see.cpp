#include<stdio.h>
int main()
{
	int x, i, count;
	printf("Which timetable do you wish to see?\n");
	scanf("%d", &count);
	for (i=1; i<=12; i++)
	{
		x=i*count;
		printf("%d*%d= %d\n",i,count,x);
	}
		return 0;
}
