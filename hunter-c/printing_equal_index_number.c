#include <stdio.h>
int main(void) 
{
int n,c=0,larg[100],i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&larg[i]);
}
for(i=0;i<=n;i++)
{
	if(larg[i]==i)
{
	printf("%d ",larg[i]);
c++;
	
}
}
if(c==0)
{
	printf("-1");
}


	return 0;
}
