#include <stdio.h>
#include<string.h>
int main(void) {
char str[100],temp;
int len,i,flag=0;
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
	if(i%2==0)
	{
		if(str[i+1]!=0)
		{
		temp=str[i];
		str[i]=str[i+1];
	
		str[i+1]=temp;
		}

	}
}
printf("%s",str);
return 0;
}
