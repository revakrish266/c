#include<stdio.h>
int main(void)
{
int n,i,a[20],sum;
float avg;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=sum/n;
printf("%f",avg);
}