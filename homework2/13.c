#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	int a, b = 1, c = 0, d, n;
	
	scanf("%d", &n);
	
	d = n;
	while(n > 0)
	{
		a = n % 10;
		n /= 10;
		
		while(a > 0)
		{
			b *= a;
			a--;
		}
		c += b;
		b = 1;
	}
	if(d == c)
	{
		printf("Strong");
	}
	else
	{
		printf("Not Strong");
	}
	
	return 0;
}
