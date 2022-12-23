#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int a, b = 1, c = 0, d, n, e;
	
	scanf("%d", &e);
	
	for(n = 1; n <= e; n++)
	{
		d = n;
		while(d > 0)
		{
			a = d % 10;
			d /= 10;
			
			while(a > 0)
			{
				b *= a;
				a--;
			}
			c += b;
			b = 1;
		}
		if(n == c)
		{
			printf("%d\n", n);
		}
		c = 0;
	}
	
	return 0;
}
