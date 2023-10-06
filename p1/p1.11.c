#include <stdio.h>
int main(){
	
	int n = 0;
	
		while(n <= 4)
		{
			
			int i = 0 + n;
			
		while(i <= 4 + n)
		{
			
			printf("%d ", (i % 5) + 1);
			i++;
			
		}
		
		printf("\n");
		
		n++;
	}
	return 0;
}
