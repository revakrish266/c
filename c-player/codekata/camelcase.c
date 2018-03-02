#include <stdio.h>
#include<string.h>

int main(void) {
char str[1000];
int len,i;
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
	if(i==0)
	{
		str[i]=toupper(str[i]);
	}
	if(str[i]==' ')
	{
		
		str[i+1]=toupper(str[i+1]);
	}
}

printf("%s",str);

	return 0;
}
