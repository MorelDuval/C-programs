#include<stdio.h>
int main() {
	float temp, F;
	
	printf("Enter temperature in Degree Celsuis \n", temp);
	scanf("%f", &temp);
	
	F= (temp*9/5) +32;
	
	printf("The temperature entered in Degree Celsuis is %.2f in Farenheint", F);
	
	return 0;
}
