#include <stdio.h>
int main(void) {
int n1,t1,rem1=0,i;
   printf("Enter the number");
 scanf("%d",&n1);
while(n1!=0)
{
t1=n1%10;
rem1=(rem1*10)+t1;
n1=n1/10;
}
while(rem1!=0)
	{
i=rem1%10;
rem1=rem1/10;
  if(i%2!=0)
   {
     printf("%d\n",i);
	    }
