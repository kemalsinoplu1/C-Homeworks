#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a, b, n, sum;
	
	
	scanf("%d", &n);
	
	for(a = 1; a != n; a++)
	{
		for(b = 1, sum = 0; b <= a / 2; b++)
		{
			if(a % b == 0)
			{
				sum += b;
			}
		}
		
		if(a == sum)
		{
			printf("%d\n", a);
		}
    }
	return 0;
}
