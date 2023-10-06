#include <stdio.h>

int main() {
	float *scorex;
	scorex = malloc(4 * sizeof(float));
	int i = 1;
	while (i <= 4)
	{
		float in;
		printf("\nEnter Score%d :",i); scanf("%f",&in);
		if (in > 100)
		{
			printf("\nInvalid input");
		}
		else if (in < 0)
		{
			printf("\nInvalid input");
		}
		
		else
		{
			scorex[i - 1] = in;
		}
		i++;
	}
	float mean;
	mean = (scorex[0] + scorex[1] + scorex[2] + scorex[3]) / 4;
	printf("\n Mean = %.1f",mean);
	
}
