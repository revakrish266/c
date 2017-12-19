#include<stdio.h>
int main(void)
{
int r=0,n,n1;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n1!=0)
{
r=r*10;
r=r+n1%10;
n1=n1/10;
}

if(n==r)
{
printf("%d palindrome number",r);
}
else
{
printf("%d not a palindrome number",r);
}
}

