#include <stdio.h>

int main() {
	int i = 1;
	while (i <= 5)
	{
		int in;
		printf("Enter Number%d : \n",i); scanf("%d",&in);
		if (in % 2 == 1)
		{
			printf("Odd\n");
		}
		else
		{
			printf("Even\n");
		}
		i++;
	}
}
