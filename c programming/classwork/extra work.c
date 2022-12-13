#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	
	switch(ch)
	case 'a': printf("/n enter a is vowel");
         	break;
   	case 'e': printf("/n enter e is vowel");
   	        break;
    case 'i': printf("/n enter i is vowel");
            break;
    case 'o': printf("/n enter 0 is vowel");
            break;
    case 'u': printf("/n enter u is vowel");
         	break;
    default: printf("/n is consonant");
            break;
}
         	
	'