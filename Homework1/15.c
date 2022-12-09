#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,n;
	
	printf("input a number:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i=i-1)
	{
		
		
		n=n-1;
		printf("%d\t",n);
		
	}
	
	
	
	return 0;
}
