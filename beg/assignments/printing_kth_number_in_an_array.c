#include <stdio.h>

int main(void) {

int s,k,a[15],i;
scanf("%d%d",&s,&k);
for(i=0;i<s;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
	if(a[i]==k)
	{
		printf("%d",a[i]);
	}
}

	return 0;
}
