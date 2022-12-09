#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a;
	
	while((a % c != 0) || (b % c != 0))
	{
		c--;
	}
	printf("%d", c);
	
	
	return 0;
}
