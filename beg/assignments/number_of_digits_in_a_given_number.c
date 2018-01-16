 
#include<stdio.h>
int main(void)
{
int n,n1,count=0;
scanf("%d",&n);
while(n!=0)
{
n1=n%10;
count++;
n=n/10;
}
printf("%d",count);
}
