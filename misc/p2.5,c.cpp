 #include <stdio.h>
 
 int main () {
 	
 	unsigned long long n, m;
 	printf("Please enter number : "); scanf("%d",&n);
 	m = n % 10;
 	printf("%d",m);
 	if (m == 9)
 	{
 		printf("\nNine");
	}
	else if (m == 8)
 	{
 		printf("\nEight");
	}
	else if (m == 7)
 	{
 		printf("\nSeven");
	}
	else if (m == 6)
 	{
 		printf("\nSix");
	}
	else if (m == 5)
 	{
 		printf("\nFive");
	}
	else if (m == 4)
 	{
 		printf("\nFour");
	}
	else if (m == 3)
 	{
 		printf("\nThree");
	}
	else if (m == 2)
 	{
 		printf("\nTwo");
	}
	else if (m == 1)
 	{
 		printf("\nOne");
	}
	else
 	{
 		printf("\nZero");
	}
 	
 }
