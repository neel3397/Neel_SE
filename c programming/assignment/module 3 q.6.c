#include<stdio.h>
void main()
{
	int n,day,year;
	printf("\n\t\tselect your option:");
	printf("\n\t\tpress 1 to convert from year to days.");
	printf("\n\t\tpress 2 to convert from days to year.");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\nenter the years:");
		scanf("%d",&year);
		printf("\ntotal days in %d year are:%d",year,(year*365));
	}
	else if(n==2)
	{
		printf("\nenter the days:");
		scanf("%d",&day);
		printf("\ntotal years of %d days are:%.2f",day,((float)day/365));
}
else
{
	printf("\n\t\tenter valid choice.");
}

}