#include <stdio.h>
#include<string.h>
int main(void) 
{
char strg[15],temp;
int len,lenn,i,j,count=0,k=0;
printf("enter the string");
scanf("%s",strg);
len=strlen(strg);
for(i=0;i<len;i++)
{
   count=1;
    for(j=i+1;j<len;j++)
    {
    if(strg[i]==strg[j])
    {
        
        count++;
if(count>k)
{
    k=count;
    temp=strg[i];
}
    }

    }
    
}
printf(" %c  ",temp);
	return 0;
}

