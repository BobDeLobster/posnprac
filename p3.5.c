#include <stdio.h>

int main () {
	
	int n1, n2 = 0;
	int p = 1;
	printf("Num 1 :"); scanf("%d",&n1);
	printf("Num 2 :"); scanf("%d",&n2);
	p = n1 * n2;
	int i = 1;
	while (i <= 1000)
	{
		
		if(i % p == 0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
