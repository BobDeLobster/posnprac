#include <stdio.h>

int main () {
	
	int num = 5; 
	int i = 1;
	while (i <= num)
	{
		int c = 1;
		while(c <= num)
		{
			printf("* ");
            c++;
		}
		printf("\n");
		i++;
	}
}
