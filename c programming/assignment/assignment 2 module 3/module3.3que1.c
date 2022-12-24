#include<stdio.h>
void max(int arr1[],int length)
{
	int i;
	int max=arr1[0];
	
	for(i=0;i<7;i++)
	{
		printf("d\t",arr1[i]);
		
		if(arr1[i]>max)
		{
		max=arr1[i];
		}
	}
}

void main()
{
int arr1[10];
int i;
int length=sizeof(arr1)/sizeof(arr1[0]);

for(i=0;i<length;i++)
{
	printf("\enter element %d:",i);
	scanf("%d",&arr1[i]);
}
printf("\n\n\n");
max(arr1,length);
}