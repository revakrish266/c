#include <stdio.h>
int main(void) 
{
int arr[15],i,n,j,max;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	    
scanf("%d",&arr[i]);
}
max=arr[0];
for(i=1;i<n;i++)
{
 if(max<arr[i])
    {
max=arr[i];
    }
}
	   
printf("%d",max);
return 0;
}
