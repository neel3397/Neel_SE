#include<stdio.h>
void main()
{
	int sum=0;
	int a=0;
	int b=1;
	int n;
	printf("\nenter a number for fibonacci series:");
	scanf("%d",&n);
	printf("\nfibonacci series:");
	
	while(sum<=n)
	{
		printf("%d|",sum);
		
		a=b;
		b=sum;
		sum=a+b;
	}
}