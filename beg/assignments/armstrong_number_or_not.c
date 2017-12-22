#include <stdio.h>

int main(void) {
int n,n1,s=0,r;
printf("enter the number");
scanf("%d",&n);
n1=n;
while(n!=0)
{
    r=n%10;
    s=s+r*r*r;
    n=n/10;
}
if(s==n1)
{
    printf(" %d armstrong number",n1);
}
else
{
    printf(" %d not an armstrong number",n1);
}
	return 0;
}

