#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,n;
	
	printf("input a number:");
	scanf("%d",&n);
	
	while (n>0)
	{
		n=n/10;
		i++;
	}
	
	printf("%d",i);
	
	
	return 0;
}
