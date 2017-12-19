#include <stdio.h>


int main(void)
{

int n,m,i,flag=0;
	
printf("enter the number");
	
scanf("%d",&n);

m=n/2;
	
for(i=2;i<=m;i++)
	
{

if(n%i==0)
		
{
			
printf("not a prime number %d",n);
			
flag=1;
		
}
	
}
	
if(flag==0)
	
{
		
printf("prime number %d",n);
	
}
	
	
return 0;

}

