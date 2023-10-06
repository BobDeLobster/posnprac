#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main ( ) {
	const double pie = M_PI;
	float out, rad;
	int opt;
	printf("Please input radius : "); scanf("%f",&rad);
	printf("Calculator menu :\n\t1.Find area\n\t2.Find circumfrence\nChoose menu :"); scanf("%d",&opt);
	if(opt == 1)
	{
		out = pie * rad * rad;	
	}
	else
	{
		out = pie * 2 * rad;
	}
	printf("%f",out);
}
