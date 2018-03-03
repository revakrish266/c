#include <stdio.h>
#include<string.h>
int main(void) {
	char str[100],str1[100];
	int len,len1,i;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
	
		{
			str1[i]=str[i];
		}
	}
	len1=strlen(str1);
	for(i=len-1;i>=0;i--)
	{
printf("%c",str1[i]);		
	}
	
	return 0;
}
