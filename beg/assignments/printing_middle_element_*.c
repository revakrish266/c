#include<stdio.h>
#include<string.h>
int main(void)
{
char str[100];
gets(str);
int len,i;
len=strlen(str);
if(len%2!=0)
{str[(len-1)/2]='*';
}else
{
str[len/2]='*';
str[(len/2)-1]='*';
}
printf("%s",str);
return 0;
}
