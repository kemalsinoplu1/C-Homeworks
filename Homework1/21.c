#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int n,l,f;

	printf("input a number:");
	scanf("%d",&n);
	
	l=n%10;
	
	while (n>=10)
	{
		n/=10;
	}
	 printf("%d %d", n , l);
	
	
	
	
	return 0;
}
