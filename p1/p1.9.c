#include <stdio.h>
int main(){
	int i = 1, product = 1;
	while(i <= 10)
	{
		product = product * i;
		i++;
	}
	printf("num : %d\n", product);
	return 0;
} 
