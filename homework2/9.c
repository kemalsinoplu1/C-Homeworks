#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
   int n, temp, remainder, x = 0, sum = 0;

   printf("Enter an integer: ");
   scanf("%d", &n);

   temp = n;

   while (temp != 0) {
      temp /= 10;
      ++x;
   }

   temp = n;

   while (temp != 0) {
      remainder = temp % 10;
      sum += pow(remainder, x);
      temp /= 10;
   }

   if (sum == n)
      printf("%d is an Armstrong number.", n);
   else
      printf("%d is not an Armstrong number.", n);

   return 0;
}

