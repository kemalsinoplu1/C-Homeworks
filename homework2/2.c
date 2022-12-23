#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int a,b,c,x,t,y;
	printf("input to number value:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	x=b*b-(4*a*c);
	printf("x: %d",x);
	
	
	if (x>= 0)
		y=(-b+x½)/(2*a);
		t=(-b-x½)/(2*a);
		printf(" y:%d t:%d",y,t);
	
	else 
		printf("not reel root");
	
	
	
	
	return 0;
}
