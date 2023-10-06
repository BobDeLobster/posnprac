#include <stdio.h>
int main() {
	int number;
	printf("enter number : \n"); scanf("%d",&number);
	int i = 1;
	while (i <= 12) {
		printf("%d x %d = %d\n",number , i ,i * number);
		i++;
	}
}
