#include <stdio.h>

int main () {
	int max = 0, min = 0;
	int i = 1;
	while (i <= 10)
	{
		int temp = 0;
		printf("Num %d :\n",i); scanf("%d",&temp);
		if(i == 1)
		{
			max = temp;
			min = temp;
		}
		if(temp > max)
		{
			max = temp;
		}
		if (temp < min)
		{
			min = temp;
		}
		i++;
	}
	printf("max = %d min = %d",max,min);
	
}
