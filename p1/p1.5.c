#include <stdio.h>
int main(){
	float n1 , n2 , n3;
	float m;
	printf("n1 :");
	scanf("%f",&n1);
	printf("n2 :");
	scanf("%f",&n2);
	printf("n3 :");
	scanf("%f",&n3);
	m = (n1 + n2 + n3) / 3;
	printf("mean : %f", m);
	return 0;
}
