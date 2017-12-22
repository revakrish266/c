#include <stdio.h>

int main(void) {
int arr[15],i,k=0,n,flag=0;
printf("enter the size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i+=k)
{
    k=arr[i];
    if(i==(n-1))
    {
        flag=1;
    }
}
if(flag==1)
{
    printf(" true ");
}
else
{
    printf(" false ");
}
	return 0;
}

