#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a,b,c;
	
	printf("input three number:");
	scanf("%d%d%d",&a,&b,&c);
	
	    if (a>b)
	       if(a>c)
	            printf("the biggest:%d",a);
	        else
			    printf("the biggest:%d",c);
		else
		   if(b>c)
			    printf("the biggest:%d",b);
			else
			    printf("the biggest:%d",c);
	
	
	
	return 0;
}
