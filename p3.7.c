#include <stdio.h>

int main () {
	
	int num; 
	printf("Num :"); scanf("%d",&num);
	int i = 1;
	while (i <= num)
	{
		printf("%d\t%d\n",i,i * i);
		i++;
	}
}
