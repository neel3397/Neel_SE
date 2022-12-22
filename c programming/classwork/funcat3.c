#include<stdio.h>

int add(int a,int b)
{
	printf("\nin function A=%d,b=%d",a,b);
	return a+b;
}
void main()
{
	int res;
	res=add(12,14);
//printf("%d",add(12,14));
printf("%d",res);
if(res%2==0)
{
	printf("\nresult is even.");
}
else
{
	printf("\nresult is odd.");

}
}