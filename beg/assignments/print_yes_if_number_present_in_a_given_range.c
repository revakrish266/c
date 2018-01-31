#include<stdio.h>
#include<string.h>
int main(void)
{
int n,l,r,i,f=0;
scanf("%d",&n);
scanf("%d %d",&l,&r);
for(i=l;i<=r;i++)
{
	if(i==n)
	{
		f++;
	}
}
if(f>0)
{
	printf("yes");
}
else
{
	printf("no");
}
return 0;
}
