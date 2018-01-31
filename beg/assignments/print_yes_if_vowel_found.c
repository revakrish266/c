#include<stdio.h>
#include<string.h>
int main(void)
{
char s1[20];
int f=0,count=0,j,len;
scanf("%s",s1);
len=strlen(s1);
for(j=0;j<len;j++)
{
if(s1[j]=='A'||s1[j]=='E'||s1[j]=='I'||s1[j]=='O'||s1[j]=='U'||s1[j]=='a'||s1[j]=='e'||s1[j]=='i'||s1[j]=='o'||s1[j]=='u')
{

	f=1;;
}
else
{
	count++;
}
}
if(f>=count||f>0)
{
	printf("yes");
}
else
{
	printf("no");
}
}
