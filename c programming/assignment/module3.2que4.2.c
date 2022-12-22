#include<stdio.h>
void main()
{
	char v;
	printf("\nenter any alphabet:");
	scanf("%c",&v);
	
	switch(v)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':printf("\nit is a vowel.");
		          break;
		default:printf("\nit is consonant.");
		          break;
	}
}
	    
	    
	    
	    
	    
	    