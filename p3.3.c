#include <stdio.h>

int main () {
	
	int temp = 0;
	int prime = 1;
	printf("Num :"); scanf("%d",&temp);
	
	int i = 2;
	while (i * i <= temp)
	{
		
		if(temp % i == 0)
		{
			prime = 0;
			break;
		}
		i++;
	}
	if(prime == 0)
	{
		printf("Not prime");
	}
	else
	{
		printf("Prime");
	}
}
