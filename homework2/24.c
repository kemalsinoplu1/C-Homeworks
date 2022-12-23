#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c = 0, d = 0;

    printf("enter a binary number\n");

    for(scanf("%d", &a); a > 0; a /= 10) {

        b = a % 10;
        if(b == 1){
            d += pow(2, c);
        }
        c++;
    }
    printf("%d", d);

    return 0;
}

