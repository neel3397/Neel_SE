#include<stdio.h>

void work(int a)
{
	printf("in function a=%d",a);
}


void main()
{
	int a;
	printf("\nenter value:");
	scanf("%d",&a);
	work(a);
}