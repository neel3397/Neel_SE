#include<stdio.h>

void main()
{
	int z,i;
	
	printf("\nenter any number you want to find table of:");
	scanf("%d",&z);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d z %d= %d",z,i,(z*i));
	}
}
