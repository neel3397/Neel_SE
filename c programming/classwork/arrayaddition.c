#include<stdio.h>
void main()
{
	int arr1[5],arr2[5],i;
	
	printf("\nenter array 1 elements:");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\nenter array 2 elements:");
					
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr2[i]);	
	}
    printf("\naddition of two arrays are:");
    
	 for(i=0;i<5;i++)
	{
		printf("%d\t", arr1[i] + arr2[i]);
	}
}
	
