#include<stdio.h>
int main(void)
{
char s1;
int n;
scanf("%c",&s1);
n=(int)s1;
if(s1>=65&&s1<=90||s1>=97&&s1<=121)
{
printf("it is an alphabet %c",s1);
}
else
{
printf("it is  not an alphabet %c",s1);
}
}
