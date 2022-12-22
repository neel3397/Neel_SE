#include<stdio.h>

int add(int a,int b)
{
	printf("\nin function A=%d,b=%d",a,b);
	return a+b;
}
void main()
{
	int res;
    int a,b;
    printf("\nenter value of a:");
	scanf("%d",&a);
	printf("\nenter value of b:");
	scanf("%d",&b);
	res=add(a,b);
	printf("\n%d",res);
}