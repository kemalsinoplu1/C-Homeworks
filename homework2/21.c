#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, sum = 0, b = 0, i;

    printf("enter a number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {

        b = b * 10 + 1;
        sum += b;
    }
    printf("\n%d", sum);

    return 0;
}
