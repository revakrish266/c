#include<stdio.h>
#include<string.h>

int main()
{
int n,k,r=1,i;
scanf("%d%d",&n,&k);
for(i=0;i<k;i++)
{
	r=n*r;
}
printf("%d",r);

	return(0);	
}
