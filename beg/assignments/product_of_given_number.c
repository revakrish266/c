#include <stdio.h>
 
int main()
{
 
 int a,r,p=1;
 scanf("%d",&a);
 while(a!=0)
 {
 	r=a%10;
 	p=p*r;
 	a=a/10;
 
 }
 printf("%d",p);
   return 0;
}
