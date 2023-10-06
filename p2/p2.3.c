#include <stdio.h>
#include <stdlib.h>

int main() {
	char idx[6]; 
	int salary, overtime;
	printf("Id "); scanf("%s",&idx);
	printf("Salary \n"); scanf("%d",&salary);
	printf("Overtime \n"); scanf("%d",&overtime);
	float total;
	total = (float) salary + overtime; 
	if (total >= 100000)
	{
		total = total * 1.1;
	}
	else if (total >= 70000)
	{
		total = total * 1.07;
	}
	else if (total >= 50000)
	{
		total = total * 1.05;
	}
	else if (total >= 30000)
	{
		total = total * 1.03;
	}
	else
	{
		total = total * 1.01;
	}
	printf("Income : %.2f\n",total);
	printf("Id :%s ",idx);	
}

