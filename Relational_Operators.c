#include <stdio.h>

int main() {
   // Define variables
   int x = 5;
   int y = 10;
   int z = 15;

   // Use relational operators to compare values
   if (x == y) {
      printf("x is equal to y\n");
   } else {
      printf("x is not equal to y\n");
   }

   if (x < y) {
      printf("x is less than y\n");
   }

   if (y > z) {
      printf("y is greater than z\n");
   }

   if (z <= x) {
      printf("z is less than or equal to x\n");
   }

   return 0;
}
