#include<stdio.h>
void main()
{
	int n;
	float rad,len,wid,sid;
	printf("\tfint the area of:");
	printf("\n\t1 for circle");
	printf("\nt2 for ractangle");
	printf("\n\t3 for square");
	scanf("\n%d",&n);
	
	if(n==1)
	{
		printf("\n\tyou chose to find area of circle.");
		printf("\n\tenter radius of circle:");
		printf("\n%f",&rad);
		printf("\n\tarea of circle= %.2f sq.mrt",(3.141*rad*rad));
	}
	else if(n==2)
	{
		printf("\n\tyou chose to find area of rectangle.");
		printf("\n\tenter length of rectangle:");
		scanf("\n%f",&len);
		printf("\n\tenter width of rectangle:");
		scanf("\n%f",&wid);
		printf("\n\tarea of rectangle=%.2f sq.mrt",(len*wid));
	}
	else if(n==3)
	{
		printf("\n\tyou chose tp find area of square.");
		printf("\n\tenter length of square:");
		scanf("\n%f",&sid);
		printf("\n\tarea of square=%.2f sq.mrt",(sid*sid));
}
else
{
	printf("\n\tselect valid operation!");
}

}
