#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, a, c = 1, b, d, e, f = 1;
	
	printf("Enter the value of X : ");
	scanf("%d", &x);
	
	printf("\nEnter the number of terms in the series : ");
	scanf("%d", &a);
	
	for(b = 1; b <= a; b++)
	{
		d = b * 2;
		e = b * 2;
		while(e > 1)
		{
			f *= e;
			e--;
		}
		
		if(b % 2 == 1)
		{
			c -= pow(x, d) / f;
		}
		else
		{
			c += pow(x, d) / f;
		}
		f = 1;
	}
	printf("\n%d", c);
	
	return 0;
}
