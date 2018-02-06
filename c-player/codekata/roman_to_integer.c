#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	
	char str[100];
	int i,len,j,s=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		switch(str[i])
		{
			case 'V':str[i]=5;
			break;
			case 'I':str[i]=1;
			break;
			case 'X': str[i]=10;
			break;
		}
	
	}
	s=str[strlen(str)-1];
	for(j=strlen(str)-1;j>0;j--)
	{
		if(str[j]>str[j-1])
		{
			s=s-str[j-1];
		}
		else
		{
			s=s+str[j-1];
		}
	}
	printf("%d",s);
	return 0;
}
