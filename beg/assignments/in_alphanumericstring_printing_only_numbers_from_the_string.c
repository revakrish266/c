#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
char str[100];
int i,len;
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
	if(str[i]>='1'&&str[i]<='9')
	{
		printf("%c",str[i]);
	}
}

	return 0;
}
