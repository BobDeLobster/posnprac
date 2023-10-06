#include <stdio.h>

int main () {
	
	char c;
	int cint;
	int size;
	printf("Char :"); scanf("%c",&c);
	cint = (int) c;
	int i = cint;
	if(cint >= 97)
	{
		size = 97;
	}
	else
	{
		size = 65;
	}
	while (i >= size)
	{
		
		printf("%c\n",i);
		i--;
	}
}
