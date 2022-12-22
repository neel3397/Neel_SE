#include<stdio.h>
void main()

{
	int a,b,op;
	
	printf("\n\t\tenter number a:");
	scanf("%d",&a);
	printf("\n\t\tenter number b:");
	scanf("%d",&b);
	
	printf("\n\t\ta=%d \n\t\tb=%d\n",a,b);
	printf("\n\t\tselect any of operation from below\n\n");
	printf("\n\n\tenter 1 for addition");
	printf("\n\n\tenter 2 for subtraction");
	printf("\n\n\tenter 3 for multiplication");
	printf("\n\n\tenter 4 for division");
	printf("\n\n\tenter 5 for modulo\n");
	
	scanf("%d",&op);
	
	
	if(op==1)
	{
		printf("\n\t addition=%d",(a+b));
	}
	else if(op==2)
	{
		printf("\n\t subtraction=%d",(a-b));
	}
	else if(op==3)
	{
		printf("\n\t multiplication=%d",(a*b));
	}
	else if(op==4)
	{
		printf("\n\t division=%.2f",((float)a/b));
    }
    else if(op==5)
	{
		printf("\n\t modulo=%d",(a%b));
	}
	else
	{
		printf("\n please choose from the given options.");
    }
}