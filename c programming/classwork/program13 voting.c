#include<stdio.h>

void main()
{
	int age;
	int a;
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("congrats you can vote.");
	}
	else
	{
		a=18-age;
		printf("you have to wait for %d years to vote.",a);
		
	}
}