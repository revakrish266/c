#include<stdio.h>
#include<string.h>
int main(void)
{
	char string[30][30],t[30];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",string[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(strcmp(string[i],string[j])>0)
			{
				strcpy(t,string[j]);
				strcpy(string[i],string[j]);
				strcpy(string[j],t);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%s",string[i]);
	}
}
