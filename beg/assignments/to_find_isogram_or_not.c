#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
char ch[15];
int len,i,j,count=0;
scanf("%s",ch);
len=strlen(ch);
for(i=0;i<len;i++)
 {
for(j=i+1;j<len;j++)
{
	if(ch[i]==ch[j])
	{
		count=1;
	}
}
}
if(count==1)
{
	printf("No");
}
else
{
	printf("Yes");
}
 return 0;
}
