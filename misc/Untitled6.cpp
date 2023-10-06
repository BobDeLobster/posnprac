#include <stdio.h>

long fb(long n)
{
	if (n <= 2)
	{
		return 1;
	}		
	else
	{
		return fb(n - 1) + fb(n - 2);
	}
	
}

int main () 
{
	long x, y;
	printf("N:"); scanf("%d",&x); 
	y = fb(x);
	printf("\n Number %d",y);
	return 0;
} 
