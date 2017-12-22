#include <stdio.h>
#include<math.h>
int main(void) {                                           
int n,n2,i;                      
printf("enter the starting number");
scanf("%d",&n);
printf("enter the ending number");
scanf("%d",&n2);
for(i=n+1;i<=n2;i++)
{
int     s=0,r,k;
    k=i;
   while(k!=0)
    {
     r=k%10;
     s=s+r*r*r;
     k=k/10;
    }

if(i==s)
{
    printf("\n %d armstrong number",i);
}
else
{
printf("\n %d not an armstrong number",i);

    
}
}
	return 0;

    
}

