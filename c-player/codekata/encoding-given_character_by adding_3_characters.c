#include <stdio.h>
#include<string.h>
int main(void) {
	int len,i,j;
	char str[100];
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]+3);
	}
	return 0;
}
