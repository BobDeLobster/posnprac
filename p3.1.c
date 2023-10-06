#include <stdio.h>

int main () {
	float mean = 0;
	int i = 1;
	while (i <= 10)
	{
		float temp = 0;
		printf("Num %d :\n",i); scanf("%f",&temp);
		mean += temp;
		i++;
	}
	mean =  mean / 10;
	printf("%.1f",mean);
	
}
