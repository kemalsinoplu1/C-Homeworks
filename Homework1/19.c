#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int n,i,t;
	t=1;
	
	printf("input a number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("%d\n",t);
		
	}	
	

	
	return 0;
}
