#include<stdio.h>
void revstr()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		revstr();
		printf("%c",c);
	}
}

void main()
{
	printf("enter a sentence:");
	revstr();
}