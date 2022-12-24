#include<stdio.h>
void main()

{
	int i;
	printf("\n\t\t even or odd");
	printf("\n\n\tenter a number:");
	scanf("%d",&i);
	
	i%2==0 ?
	printf("\n\tit is even number.") :	printf("\n\tit is odd number.");
}