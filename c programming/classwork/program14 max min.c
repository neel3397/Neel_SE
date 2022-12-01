#include <stdio.h>

void main()
{
	int num1;
	int num2;
	
	printf("enter the first number:");
	scanf("%d",&num1);
	
	printf("enter the second number:");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
		printf("%d is max number among the two.",num1);
	}
	else
	{
		printf("%d is min number among the two.",num2);
	}
}

	
	