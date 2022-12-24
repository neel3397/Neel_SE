#include<stdio.h>
void main()
{
	int num=0;
	int i;
	int ce=0;
	int co=0;
	int sum_even=0;
	int sum_odd=0;
	
	printf("\nenter 10 numbers \n");
	for(i=1;i<11;i++)
	{
		printf("\menter number %d:",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			sum_even=sum_even+num;
			 ce++;
        }
        else
        {
        	sum_odd=sum_odd+num;
        	 co++;
        }
    }
    printf("-----------------------------\n");
    printf("\nthere are %d even numbers",ce);
    printf("-----------------------------\n");
	printf("\nthere are %d odd numbers",co);
	printf("-----------------------------\n");
	printf("\nsum of even numbers:%d\n",sum_even);
	printf("-----------------------------\n");
	printf("\nsum of odd numbers:%d\n",sum_odd);
}