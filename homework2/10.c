#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, z, i, y, sum, a, p;
	
	scanf("%d", &p);
	
	for(n = 1; n < p; n++)
	{
		z = n;
		y = n;
		sum = 0;
		
		for(i = 0; z > 0; z /= 10, i++){}	//this line's purpose count how much digits are there in given number.
		
		while(y > 0)
		{
			a = y % 10;
			sum += pow(a, i);
			y /= 10;
		}
		if(sum == n)
		{
			printf("%d\n", n);
		}
	}
	
	return 0;
}
