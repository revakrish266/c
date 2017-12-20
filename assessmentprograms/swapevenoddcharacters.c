#include<stdio.h>
#include<string.h>
int main(void)
{
int i,j,t,len;
char str[10];
scanf("%s",str);
len=strlen(str);
if(len%2==0)
{
for(i=0;i<=len-1;i+=2)
{
t=str[i];
str[i]=str[i+1];
str[i+1]=t;
}
printf("%s",str);
}
}
