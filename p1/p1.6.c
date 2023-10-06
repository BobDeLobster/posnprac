#include <stdio.h>
int main(){
	int n;
	printf("n : ");
	scanf("%d",&n);
	float sum = 0;
	float m;
	int i = 1;
	while(i <= n)
	{
		float new;
		scanf("%f",&new);
		sum = sum + new;
		i++;
	}
	m = sum / n;
	printf("mean : %g", m);
	return 0;
}
