#include <stdio.h>
int main(void)
 {
	int n,n1,p,t,count=1;
scanf("%d %d",&n,&n1);
p=n*n1;
t=p;
      while(t> 0)
      {
            t = t - count;
            count = count + 2;
      }
if(t==0)
{
printf("yes");
}
else
{
printf("no");
}

	return 0;
}
