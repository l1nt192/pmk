#include <stdio.h>
#include "Euler.h"
#define SIZE 2
int main()
{
   int value = 0;
   int array[SIZE];
   printf("value = ");
   scanf_s("%d", &value);
   printf("array=");

   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%d", &array[i]);
   
   
   printf("answer = % llu\n", Problem_1(value, array, SIZE));
   return 0;
}