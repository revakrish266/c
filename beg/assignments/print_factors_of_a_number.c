#include <stdio.h>

int main(void) {
	// your code goes here
int n,i,s,e;
scanf("%d",&n);
scanf("%d %d",&s,&e);
for(i=s;i<e;i++)
{
if(n%i==0)
{
printf("%d",i);
}
}



	return 0;
}
