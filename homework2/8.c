#include <stdio.h>
#include <stdlib.h>



int main() {
	int n,j,i,sum=2;
	printf("input to number:");
	scanf("%d",&n);
	
	if(n>2)
	{
		for(i=3; i<=n; i++)
		{
			for(j=2; j<i; j++)
			{
				if(i%j==0)
				{
					break;
				}
				else if(j==i-1)
				{
					sum+=i;
				}
			}
		}
		printf("%d",sum);
	}
	else if(n==2)
	{
		printf("%d",n);
	}
	
	
	return 0;
}
