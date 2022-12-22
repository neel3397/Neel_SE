#include<stdio.h>
void main()
{
	int a,b,i;
	printf("\nenter the number of obtain it's table:");
	scanf("%d",&a);
	printf("\nenter the number upto which you want the table:");
	scanf("%d",&b);
	
	for(i=1;i<b+1;i++)
	{
		printf("\n%d\t%d\t%d",a,i,(a*i));
	}
}