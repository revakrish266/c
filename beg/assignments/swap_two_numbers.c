#include <stdio.h>
int main(void)
 {
int a,b,i,temp,j;
scanf("%d %d",&a,&b);
  temp=a;
  a=b;
   b=temp;
printf("a=%d b=%d",a,b);
return 0;
}
