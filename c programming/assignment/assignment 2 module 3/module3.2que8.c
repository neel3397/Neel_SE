#include<stdio.h>
void main()
{
	int n,remainder;
	int reserve=0;
	
	printf("\nenter a number to reserve:");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder=n%10;
		reserve=(reserve*10)+remainder;
		n/=10;
	}
	printf("\nthe reserved number is %d.",reserve);
}