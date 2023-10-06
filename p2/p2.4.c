#include <stdio.h>

int main() {
	int score1, score2;
	printf("\nEnter Score1 :"); scanf("%d",&score1);
	printf("\nEnter Score2 :"); scanf("%d",&score2);
	float mean;
	mean = (float) (score1 + score2) / 2;
	
	if (mean > 100)
	{
		
		printf("Out of range");
		
	}
	else if (mean >= 80)
	{
		
		printf("Good");
		
	}
	else if (mean >= 50)
	{
		
		printf("Pass");
		
	}
	else if (mean >= 0)
	{
		
		printf("Fail");
		
	}
	else
	{
		
		printf("Out of range");
		
	}
	
}
