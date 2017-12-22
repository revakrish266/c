#include <stdio.h>
#include<string.h>
int main(void)
{
char a[15];
int i,len,count=0,count1=0;
printf("enter the string");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
    if( a[i]>=97&&a[i]<=122||a[i]>=65&&a[i]<=90)
    {
        count++;
    }
    else
    {
        count1++;
    }
}
printf("\n alphabets %d",count);
printf("\n numbers %d",count1);

	return 0;
}

