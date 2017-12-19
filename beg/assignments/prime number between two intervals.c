#include <stdio.h>


int main(void)
{

int n,m,i,flag=0;
	
printf("enter the number");
	
scanf("%d%d",&n,&m);

while(n<m)
{	
for(i=2;i<=n/2;i++)
	
{

flag=0;
if(n%i==0)
		
{
			

			
flag=1;
		
}
	
}
	
if(flag==0)
	
{
		
printf(" %d",n);
	
}
	
	
++n;
}
return 0;

}

