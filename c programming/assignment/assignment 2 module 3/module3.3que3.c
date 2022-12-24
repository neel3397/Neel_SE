#include<stdio.h>
void main()
{
	char na[10];
	printf("enter any string");
	gets(na);
	rev(na,0,strlen(na)-1);
	printf("reverse of string %s",na);
	
	
	getch();
}
void rev(char na[],int i,int I)
{
	char ch;
	if(i>=1)
	return;
	ch=na[i];
	na[i]=na[I];
	na[I]=ch;
	rev(na,++i,--i);
}