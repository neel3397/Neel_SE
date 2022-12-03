#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("\n\t\tchoice calculator");
	
	printf("\n enter number a:");
	scanf("%d",&a);
	printf("\n enter number b:");
	scanf("%d",&b);
	printf("\nenter your choice");
	printf("\nenter 1 for addition");
	printf("\nenter 2 for subtraction");
	printf("\nenter 3 for multiplication");
	printf("\nenter 4 for division");
	
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\naddition:%d",(a+b));
	}
	else if(choice==2)
	{
		printf("\nsubtraction:%d",(a-b));
	}
	else if(choice==3)
	{
		printf("\nmultiplication:%d",(a*b));
	}
	else if(choice==4)
	{
		printf("\ndivision:%.2f",((float)a/b));
			
	}
	else
	{
		printf("\nInvalid Choice");
		}	
	
}
		
	