#include <stdio.h>
// #include <conio.h>

void main()
{
	char c;
	// clrscr();

	printf("enter the character");
	scanf("%c",&c);

	if(c=='a' || c=='e' || c=='i'|| c=='o'||c=='u'||
	c=='A' || c=='E' || c=='I'|| c=='O'||c=='U')
	{
	printf("vowel");
	}
	else if((c>='a' && c<='z') ||(c>='A'&& c<='Z'))
	{
		printf("constent");
	}
	else
	{
		printf("not");
	}
	// getch();
}




