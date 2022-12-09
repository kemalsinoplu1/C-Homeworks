#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i,sum;
	sum=0;
	
	for(i=1000;i<=2000;i+=2)
	{
		sum=sum+i;
		printf("%d\n",i);
		
	}
	
	printf("%d",sum);
	
	
	return 0;
}
