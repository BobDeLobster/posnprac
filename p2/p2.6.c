#include <stdio.h>

int main ( ) {
	
	char c, o;
	printf("input character :"); scanf("%c",&c);
	int ic = (int) c;
	if (ic > 122)
	{
		printf("Error");
	}
	else if (ic < 65)
	{
		printf("Error");
	}
	else if (ic >= 97)
	{
		ic -= 32;
		o = (char) ic;
		printf("\n%c",o);
	}
	else if (ic <= 90)
	{
		ic += 32;
		o = (char) ic;
		printf("\n%c",o);
	}
	else 
	{
		printf("Error");
	}
	
}
