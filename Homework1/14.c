#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n,i,f=1;
	
	
	printf("input a value:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	
		f=f*i;
			
	}
	
	printf("%d",f);
	
	return 0;
}
