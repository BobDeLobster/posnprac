#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main(){
	const double pie = M_PI;
	int r;
	printf("radius :");
	scanf("%d",&r);;
	printf("cir : %f", r * 2 * pie);
	return 0;
}
