#include<stdio.h>
void add(int a, int b)
{
	printf("\n addition=%d",(a+b));
}
void sub(int a, int b)
{
	printf("\n subtraction=%d",(a-b));
}
void mul(int a, int b)
{
	printf("\n multiplication=%d",(a*b));
}
void div(int a, int b)
{
	printf("\n division =%d",(a/b));
}
void main()
{
	int a,b,op;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	
	printf("\nenter the choice");
	printf("\n 1 for addition");
	printf("\n 2 for subtraction");
	printf("\n 3 for multiplication");
	printf("\n 4 for division");
	scanf("%d",&op);
	
	if(op==1)
	{
		add(a,b);
	}
	else if(op==2)
	{
		sub(a,b);
	}
	else if(op==3)
	{
		mul(a,b);
	}
	else if(op==4)
	{
		div(a,b);
	}
	else
	{
		printf("\ninvalid choice!!");
    }
}
