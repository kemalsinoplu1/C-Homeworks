#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, a;
	double b = 0;
	
	scanf("%d", &x);
	
	for(a = 1; a <= x; a++)
	{
		if(a % 2 == 1)
		{
			b = b * 100  + 1;
			printf("%0.f\n", b);
		}
		else
		{
			printf("0%0.f\n", b);
		}
	}
	
	
	return 0;
}
