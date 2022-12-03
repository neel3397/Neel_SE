#include<stdio.h>

void main()
{
	char ch;
	printf("\nenter a character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':printf("\nit is a vowel");
	           	break;
	   	case 'e':printf("\nit is a vowel");
	           	break;
	   	case 'i':printf("\nit is a vowel");
	           	break;
	   	case 'o':printf("\nit is a vowel");
	           	break;
	    case 'u':printf("\nit is a vowel");
	           	break;
	   	default :printf("\nit is a consonant");
	           	break;
	}
}