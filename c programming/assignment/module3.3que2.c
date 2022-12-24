#include<stdio.h>
void main()
{
	int a,b,c,n;
	printf("enter any number");
	printf("\n1 for add");
	printf("\n2 for sub");
	printf("\n1 for mul");
	printf("\n1 for div");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter two nymber");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("sum is=%d",c);
			break;
		case 2:
		    printf("enter two nymber");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("sub is=%d",c);
			break;
		case 3:
			printf("enter two nymber");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("mul is=%d",c);
			break;
		case 4:
			printf("enter two nymber");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("div is=%d",c);
			break;
		default:
			printf("invalid number");
		}
		printf("\nend program");
}
	