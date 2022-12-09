#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d, e, f, g;
	
	scanf("%d", &a);
	
	b = a;
	g = a;
	e = 1;
	f = 0;
	
	while(a > 10)
	{
		a /= 10;
		d++;
	}
	while(d >= 1)
	{
		c = b % 10;
		f = c + f * 10;
		b /= 10;
		d--;
	}
	if(g == f)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}
