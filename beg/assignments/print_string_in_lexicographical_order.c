#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	char str[100],temp;
	int i,len,j;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			
           if(str[i]>str[j])
             {
	            temp=str[i];
	            str[i]=str[j];
	            str[j]=temp;
             }
		}
	}
for(i=0;i<len;i++)
{
	printf("%c",str[i]);
}
	return 0;
}
