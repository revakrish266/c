#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100],c;
	int len,i,j,count=1,max=1;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]==str[j])
			{
				count++;
				if(count>max)
				{
					max=count;
					c=str[i];
				}
			}
		}
	}
	if(count==1)
	{
		printf("alphabet is not repeated");
	}
	else
	{
	printf("%c",c);
	}
	return 0;
}
