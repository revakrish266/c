#include <stdio.h>
#include<string.h>
int main(void) {
	
	char str[100];
	int len,i;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(i<len-1)
		{
		printf("%c",str[i]);
		}
	
		else
		{
			printf("%c.",str[i]);
		}
		
		
	}
	
	
	
	return 0;
}
