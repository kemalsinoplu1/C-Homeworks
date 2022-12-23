#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a, b, c = 0, d = 0;
	
	scanf("%d", &a);
	
	b = a;
	
	while(b > 0)
	{
		c = b % 10;
		d = (10*d) + c;
		b /= 10;
	}
	if(a == d)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	
	return 0;
}
