#include <stdio.h>
#include<string.h>
int main(void) {
	
	char str[100],str1[100];
	int len,len1,i,count=0,count1=0;
	scanf("%s %s",str,str1);
	len=strlen(str);
	len1=strlen(str1);
	if(len==len1)
	{
		for(i=0;i<len;i++)
		{
			if(str[i]==str1[i])
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
	}
	else
	{
		printf("Yes");
	}
	if(count>1)
	{
	if(count1==1)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
	}
	
		return 0;
}
