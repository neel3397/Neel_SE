#include<stdio.h>

void main()
{
	int age;
	char name[15];
	float salary;
	printf("\nenter your name : ");
	//scanf("%s,&name);
	gets(name);
	printf("enter your age :");
	scanf("%d",&age);
	printf("enter your salary :");
	scanf("%f",&salary);
	
	printf("\nname is :s",name);
	printf("\nage is: %d",age);
	printf("\nsalary is :%.2f",salary);
	
}