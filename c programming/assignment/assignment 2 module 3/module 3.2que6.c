#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("\nenter a number to obtain it's factorial:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f=f*i;
  }
  printf("\n\nthe factorial of %d=%d",n,f);
}