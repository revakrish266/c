#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
char ch[15];
int len,i;
scanf("%s",ch);
len=strlen(ch);
for(i=0;i<len;i++)
 {
if(i%2==0)
  {
printf("%c",ch[i]);
  }
 }  
 	printf("\t");
for(i=0;i<len;i++)
 {
if(i%2!=0)
  {
printf("%c",ch[i]);
  }
 }  
 return 0;
}
