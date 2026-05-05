#include<stdio.h>
int main() 
{
	int N;
	/*Menu choice*/
	printf("MENU OF TERMS\n\n");
	printf("1 Single \n");
	printf("2 Double \n");
	printf("3 Triple \n");
	printf("4 Quadruple \n\n");
	printf("Enter the number (1-4):");
	scanf("%d", &N);
	
	if (N==1)
	printf ("ONE");
	
	else
	if (N==2)
	printf("TWO");
	
	else
	if (N==3)
	printf("THREE");
	
	else
	if (N==4)
	printf("FOUR");
	
	else
	printf("ERROR");
	
	return 0;
}
