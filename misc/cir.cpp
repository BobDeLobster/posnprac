#include <stdio.h>
#include <math.h>
int main(){
	const double pie = atan(1) * 4;
	int r;
	printf("radius :");
	scanf("%d",&r);;
	printf("cir : %d", r * 2 * pie);
	return 0;
}
