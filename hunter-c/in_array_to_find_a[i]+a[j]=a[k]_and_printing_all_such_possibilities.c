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
		for(n1=0;n1<n;n1++)
		{
			if(sum==arr[n1])
			{
				printf("%d %d %d \n",arr[i],arr[j],sum);
			}
		}
	}
}


	return 0;
}
