#include<stdio.h>
int main(void)
{
int n1,n2,r,n,d,gcd;
scanf("%d %d",&n1,&n2);
if(n1>n2)
{
n=n1;
d=n2;
}
else
{
n=n2;
d=n1;
}
r=n%d;
while(r!=0)
{
n=d;
d=r;
r=n%d;
}
gcd=d;

printf("%d",gcd);
}
