#include<stdio.h>
#include<string.h>

int main()
{
int a[100],n,i,k,count;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]>a[i+1])
	{
		count=a[i];
		a[i]=a[i+1];
		a[i+1]=count;
	}
}
printf("%d",a[k-1]);

	return(0);	
}
