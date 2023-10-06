#include <stdio.h>

int main () {
	
	int num; 
	printf("Num :"); scanf("%d",&num);
	int i = 1;
	while (i <= num)
	{
		int pw = 1, c = 1;
		while(c <= i)
		{
			pw *= 2;
            c++;
		}
		printf("%d\t%d\n",i,pw);
		i++;
	}
}
