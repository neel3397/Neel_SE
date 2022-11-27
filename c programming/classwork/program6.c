#include<stdio.h>

void main()
{
	int a,b;
	printf("enter the value :");
	scanf("%d",&a);
	printf("\n enter the value :");
	scanf("%d",&b);
	
	
	
	printf("\naddition : %d",(a+b));
	printf("\nsubtraction : %d",(a-b));
	printf("\nmultiplication : %d",(a*b));
	printf("\ndivision : %.3f",((float)a/b));
	
}