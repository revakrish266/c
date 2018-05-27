#include <stdio.h>

int main(void) {
int arr[100],i,j,sum=0,n,n1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		sum=arr[i]+arr[j];
		if(sum==0)
		{
			printf("%d %d\n",arr[i],arr[j]);
		}
			}
}


	return 0;
}
