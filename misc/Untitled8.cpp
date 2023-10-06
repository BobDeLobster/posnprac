#include <stdio.h>

int main() {
	float area, out;
	printf("Enter Area :\n"); scanf("%f",&area);
	if (area < 0)
	{
		printf("Error"); 
		
	}
	else if (area < 80)
	{
		out = area * 12.5;
		
	}
	else if (area <= 200)
	{
		out = area * 10;
		
	}
	else if (area <= 400)
	{
		out = area * 7.5;
		
	}
	else
	{
		out = area * 5;
	}
	printf("Total cost : %.2f baht",out);
}
