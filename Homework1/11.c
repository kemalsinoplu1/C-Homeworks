#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i,n,sum;
	sum=0;
	
	printf("input a value:");
	
	
	for(i=1;i<10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
		
	}
	 printf("%d",sum);
	
	return 0;
}
