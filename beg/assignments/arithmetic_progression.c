#include<stdio.h>
#include<string.h>

int main()
{
int a,d,n,r=0,i;
scanf("%d%d%d",&a,&d,&n);
for(i=0;i<n;i++)
{
	r=r+(a+i*d);
}
printf("%d",r);
	return(0);	
}
