#include <stdio.h>
int main() {
	int x = 1;
	while (x <= 12){
		int i = 1;
		while (i <= 12) {
			printf("%d\t",i * x);
			i++;
		}
		printf("\n");
		x++;
	}
}
