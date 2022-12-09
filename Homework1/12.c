#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,a,b,c;
	printf("input three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	for(i=a;i<=b;i+=c)
	{
		
		printf("%d\t",i);
		
	}
	

	
	return 0;
}
