#include<stdio.h>
int main() 
{
	int length, width, height, volume;
	 printf("Enter the length of the cube: ");
	 scanf("%d", &length);
	 
	 printf("Enter the width of the cube: ");
	 scanf("%d",&width);
	 
	 printf("Enter the height of the cube: ");
	 scanf("%d", &height);
	 
	 volume=length*width*height;
	 
	 printf("The volume of the cube is %d: ");
	 
	 return 0;
}

