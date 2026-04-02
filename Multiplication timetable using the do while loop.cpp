#include<stdio.h>
int main()
{
	int x, count;
	int i=0;
	printf("Multiplication Timetable:\n");
	scanf("%d", &count);
	do{
		i=i+1;
		x=i*count;
		printf(" %d*%d=%d\n", i, count, x); 
	}
	while (i<12);
}
