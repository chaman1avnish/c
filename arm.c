#include<stdio.h>

int main() {
   int num, t, sum = 0, rem;

   printf("\nEnter number for checking Armstrong : ");
   scanf("%d", &num);

   while (num >= 1) {
      rem = num % 10;
      sum = sum + (rem * rem * rem);
      num = num / 10;
   }

   if (sum== num)
      printf("is Amstrong Number");
   else
      printf("is not  Amstrong Number");

   return 0;
}
