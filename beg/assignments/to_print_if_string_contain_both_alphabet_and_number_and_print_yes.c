#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes her
	char str[25];
	int n,i,len,count=0,flag=0;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
				{
			count=1;
				}
	             else if(str[i]>='0'&&str[i]<='9')
	             {
	             	flag=1;
	             }
		else
		{
		flag=0;	
		}//printf("yes");
	            
}
	if(flag==1 && count==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
