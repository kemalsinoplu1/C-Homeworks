#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, c, d;
	c = 0;
	d = 0;
	
	scanf("%d", &a);
	while(a > 0)
	{
		b = a % 2;
		d += b * pow(10, c);
		c++;
		a /= 2;
	}
	printf("%d", d);
	
	return 0;
}
