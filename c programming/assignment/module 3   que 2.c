#include<stdio.h>
void main()

{
	int a,b,c;
	printf("\n\tenter number a:");
	scanf("%d",&a);
	printf("\n\tenter number b:");
	scanf("%d",&b);
	
	printf("\n\ta=%d and b=%d",a,b);
	
	printf("select an operation to perform");
	printf("\n\n\tenter 1 for addition");
	printf("\n\n\tenter 2 for subtraction");
	printf("\n\n\tenter 3 for multiplication");
	printf("\n\n\tenter 4 for division");
	printf("\n\n\tenter 5 for modulo\n");
	
	scanf("%d",&c);
	
	switch(c)
	{
		case 1: printf("\n\t addition=%d",(a+b));
		       break;
		case 2: printf("\n\t subtraction=%d",(a-b));
		       break;
		case 3: printf("\n\t multiplication=%d",(a*b));
		       break;
		case 4: printf("\n\t division=%.2f",((float)a/b));
		       break;
		case 5: printf("\n\t modulo=%d",(a%b));
		       break;
		default: printf("\n\t invalid input!");
		       break;
 }
 
 
}
	
