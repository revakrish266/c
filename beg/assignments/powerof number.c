#include<stdio.h>
int main(void)
{
int base,exp,i,power=1;
printf("enter the base number:");
scanf("%d",&base);
printf("enter the exponent number:");
scanf("%d",&exp);
for(i=1;i<=exp;i++)
{
power=power*base;
}
printf("power of a number %d",power);
}
