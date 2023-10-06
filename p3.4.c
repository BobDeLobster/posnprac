#include <stdio.h>

int p(int a)
{
	int i = 2,prime = 1;
	while (i * i <= a)
	{
		
		if(a % i == 0)
		{
			prime = 0;
			break;
		}
		i++;
	}
	if(prime == 0)
	{
		return(0);
	}
	else
	{
		return(1);
	}
}

int main () {
	
	int temp = 0;
	int prime = 1;
	int count = 0;
	printf("Num :"); scanf("%d",&temp);
	int i = 2;
	while(i <= temp)
	{
		if(p(i))
		{
			printf("%d\n",i);
			count += 1;
		}
		i++;
	}
	printf("count : %d", count);
}
