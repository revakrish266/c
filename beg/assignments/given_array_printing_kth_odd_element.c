#include<stdio.h>
#include<string.h>

int main()
{
int a[100],n,i,k,count=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]%2!=0)
	{
		count++;
	}
if(count==k)
{
	printf("%d",a[i]);
	break;
}
	
}

	return(0);	
}
