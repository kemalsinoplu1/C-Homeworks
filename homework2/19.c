#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int function(int x);

int main(){
	
	float x, n, sum = 0, i;
	
	printf("what is the x?\n");
	scanf("%f", &x);
	printf("define your series lenght\n");
	scanf("%f", &n);
	
	for(i = 0; i < n; i++){
		
		sum += pow(x, i) / function(i);
	}
	printf("%f", sum);
	
	return 0;
}

int function(int x){
	float func = 1;
	while(x > 0){
		func *= x;
		x--;
	}
	return func;
}
