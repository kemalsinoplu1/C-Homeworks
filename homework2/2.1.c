#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,area,perimeter;
	printf("input to rectangle:\n");
	scanf("%d %d",&a,&b);
	

	perimeter=2*(a+b);
	area=a*b;
	
	printf("perimeter: %d\narea: %d",perimeter,area);
	
	
	
	return 0;
}
