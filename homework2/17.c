#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n, a, b = 0;
	
	scanf("%f", &n);
	
	for(a = 2; a <= n ; a++)
	{
		b += 1 / a;
	}
	printf("%f", b);
	
	return 0;
}
