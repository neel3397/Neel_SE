#include<stdio.h>
void main()
{
	float principal,rate,time;
	
	printf("\nenter the principal of amount:");
	scanf("%f",&principal);
	
	printf("\nenter the rate of interest:");
	scanf("%f",&rate);
	
	printf("\nenter the time of duration in years:");
	scanf("%f",&time);
	
	printf("\n simple interest=%f",((principal*rate*time)/100));
	
}
