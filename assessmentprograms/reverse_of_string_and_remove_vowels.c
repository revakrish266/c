#include <stdio.h>

int main(void) {
	
int i,j,len,r=0;
char str[15],str1[15],temp;
gets(str);
len=strlen(str);
i=0;
j=len-1;
while(i<j)
{
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}
printf("\n %s ",str);
for(i=0;i<len;i++)
{
    if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
{
    str[i]='_';
}
else
{
    str1[r++]=str[i];
    
}
    
    
}
	printf("\n %s",str1);
	return 0;
}

