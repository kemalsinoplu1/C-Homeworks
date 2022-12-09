#include <stdio.h>
#include <stdlib.h>


int main ( ) {
	
	int f,c;
	
	printf("fahrenheit:");
	scanf("%d",&f,&c);
	
	c=(f-32)*5/9;
	printf("%d",c);
	
	
	return 0;
}
