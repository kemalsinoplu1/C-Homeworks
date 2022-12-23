#include <stdio.h>

int main()
{
	
	int n, j, i;
	
	printf("input to number:");
	scanf("%d", &n);
	
	if(n > 2)
	{
		printf("2\t");
		
		for(i=3; i <= n; i++)
		{
			for(j = 2; j < i; j++)
			{
				if(i % j == 0)
				{
					break;
				}
				else if(j == i - 1)
				{
					printf("%d\t", i);
				}
			}
		}
	}
	else if(n == 2)
	{
		printf("%d", n);
	}
	
	getch();
	return 0;
}

