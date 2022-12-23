#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n, x, i, sum = 0;
	
	printf("what is x\n");
	scanf("%d", &x);
	printf("define how many variables in your series\n");
	scanf("%d", &n);
	
	for(i = 1; n > 0; i += 2, n--){
		
		sum += pow(x, i);
	}
	printf("%d", sum);
	
	return 0;
}
