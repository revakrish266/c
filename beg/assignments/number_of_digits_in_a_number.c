#include<stdio.h>
int main(void)
{
int nn,n1,count=0;
scanf("%d",&nn);
while(nn!=0)
{
n1=nn%10;
count++;
nn=nn/10;
}
printf("%d",count);
}
