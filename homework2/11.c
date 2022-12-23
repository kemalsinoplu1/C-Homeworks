#include <stdio.h>
#include <stdlib.h>



int main ()
{
	int a, b, sum = 0;
	
	scanf("%d", &a);
	
	for(b = 1; b <= a / 2; b++)
	{
		if(a % b == 0)
		{
			sum += b;
		}
	}
	
	if(a == sum)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}
	
	return 0;
}
