#include <stdio.h>

int main(void) {
	
	int n,i,arr1[100],arr2[100],a[100],a1[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr1[i]%2==0)
		{
			arr2[i]=arr1[i];
		}
		else
		{
			a[i]=arr1[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			a1[i]=a[i];
		}
		else
		{
			a1[i]=arr2[i];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a1[i]);
	}
	
	return 0;
}
