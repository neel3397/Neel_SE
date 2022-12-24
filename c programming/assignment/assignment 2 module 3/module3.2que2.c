#include<stdio.h>
void main()
{
	int a,b;
	printf("\n\t\tenter number a:");
	scanf("%d",&a);
	printf("\n\t\tenter number b:");
	scanf("%d",&b);
	
	printf("\n\t\tnumbers before swapping:");
	printf("\n\t\ta=%d \n\t\tb=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\t\tnumbers after swapping:");
	printf("\n\t\ta=%d \n\t\tb=%d",a,b);

}