#include<stdio.h>

union employee
{
	int eid;
	char ename[20];
	float esal;
};
void main()
{
	union employee emp;
	
	printf("/nenter id:");
	scanf("%d",&emp.eid);
	printf("id:%d",emp.eid);
	
	printf("/nenter name:");
	scanf("%s",&emp.ename);
	printf("name:%s",emp.ename);
	
	printf("/nenter salary:");
	scanf("%f",&emp.esal);
	printf("salary:%.2f",emp.esal);
	
	printf("\n\nsize of union is :%d bytes",sizeof(emp));
}
