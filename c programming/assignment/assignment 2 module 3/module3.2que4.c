#include<stdio.h>

void main()
{
	char x;
	printf("\nenter 'm' for monday.");
	printf("\nenter 't' for tuesday.");
	printf("\nenter 'w' for wednesday.");
	printf("\nenter 't' for thursday.");
	printf("\nenter 'f' for friday.");
	printf("\nenter 's' for saturday.");
	pruntf("\nenter 's' for sunday.");
	
	scanf("%d",&x);
	
	switch(x)
	{
	 case 'M':
	 case 'm':printf("\nit is monday.");
	           break;
	 case 'T':
	 case 't':printf("\nit is tuesday.");
	           break;
	 case 'W':
	 case 'w':printf("\nit is wednesday.");
	           break;
	case 'T':
	 case 't':printf("\nit is thursday.");
	           break;
	 case 'F':
	 case 'f':printf("\nit is friday.");
	           break;
	 case 'S':
	 case 's':printf("\nit is saturday.");
	           break;
	 case 'S':
	 case 's':printf("\nit is sunday.");
	           break;
	 default:printf("\nincorrect choice");
	           break;
}
}
			   