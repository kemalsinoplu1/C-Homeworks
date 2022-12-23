#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b = 0;

    for(a = 101; a < 200; a++){
        if(a % 9 == 0){
            printf("%d\n", a);
            b += a;
        }
    }
    printf("%d", b);

    return 0;
}
