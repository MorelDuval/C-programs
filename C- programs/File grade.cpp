#include<stdio.h>
int main ()
{
	float MG, FG, TFG;
	printf(" Input a value for MG and TFG:");
	scanf("%f %f", &MG, &TFG);
	
	FG=(MG+TFG)/2;
	printf("Your FG is: %.1f\n", FG);
	
	if (FG>=75)
	printf("PASSED\n");
	
	else
	printf("FAILLED\n");

}
