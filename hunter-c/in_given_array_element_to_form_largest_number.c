#include <stdio.h>
int main(void) 
{
int n,larg[100],i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&larg[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(larg[i]<larg[j])
		{
			temp=larg[i];
			larg[i]=larg[j];
			larg[j]=temp;
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%d",larg[i]);
}
	return 0;
}
