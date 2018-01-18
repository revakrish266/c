#include <stdio.h>
int main() 
{
 int i = 25;
 int j = 50;
 printf(" value of i=%d k=%d before swapping", i, j);
 i = i ^ j;
 j = i ^ j;
 i = i ^ j;
 printf("value of i=%d k=%d after swapping", i, j);
   return 0;
}
