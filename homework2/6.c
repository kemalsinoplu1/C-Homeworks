#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,m,c;
	printf("input to numbers:\n");
	scanf("%d %d",a,b);
	if (a>b)
		m=a;
		if(m%a==0 && m%b==0)
			m++;
		else
			printf(" LCM: %d", m);
	else
		c=b;
		if(c%a==0 && c%b==0)
			c++;
		else
			printf(" LCM: %d", c);
	
	return 0;
}
