#include <stdio.h>
#include<string.h>
int main(void) {
char str[20];
int n,len,i,flag=0,t=0;
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
	if(str[i]=='0'||str[i]=='1')
	{
		flag=1;
	}

	else
	{
               t=1;
	}
}
if(flag==1&&t==0)
{
	printf("yes");
	
}
else
{
	printf("no");
}

	return 0;
}
