#include<stdio.h>

void main()

{
	int i,j,k;
	for(i=0;i<=10;i++)
	{
		for(k=0;k<=10-i;k++)
		{
			printf(" ");
		}
	for(j=1;j<=i;j++)
	{
		printf(" *");
	}
	printf("\n");
}
}
	
