#include<stdio.h>
void main()

{
	int arr1[5];
	int i,j,temp;
	printf("\nenter array elements :\n\n");
	for(i=0;i<5;i++)
	{
		printf("enter elment [%d]:",i+1);
		scanf("%d",&arr1[i]);
	}
	
	printf("\narray elements are:\n\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t",arr1[i]);
	}
	printf("\n\narray elements in ascending orders:");
	{
		
	for(i=0;i<5;i++)
	{
	
	for(j=i+1;j<5;j++)
	{
	 if(arr1[i]>arr1[j]);
	 
	 temp=arr1[i];
	 arr1[i]=arr1[j];
	 arr1[j]=temp;
    } 
     
