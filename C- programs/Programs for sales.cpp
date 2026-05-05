#include<stdio.h>
int main()
{
	int sales;
	float comm;
	printf("Enter sales amount: ");
	scanf("%d", &sales);
	
	if(sales<=1000)
	{
	comm=sales*(0/100);
	}
	
		else
		if (sales>1000 && sales<=2000)
		{
			comm=sales*(3/100);
		}
		
		else
		if(sales>2000 && sales<=5000)
		{
		comm=sales*(5/100);
		}
		
		else
		if(sales>5000)
		{
		comm=sales*(8/100);
		}

	
	printf("Commission %.2f\n", comm);
	return 0;
}
