#include<stdio.h>
int maximum(int []);
void main()
{
	int a[10],i,m;
	printf("\nenter 10 numbers");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	m=maximum(a);
	printf("\nmaximum=%d",m);
	return 0;
	


}
int maximun(int a[])
{
	int i,m=32768;
	for(i=0;i<10;i++)
	{
		if(a[i]>m)
		m=a[i];
	}
	return m;
}