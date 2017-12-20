#include <stdio.h>

using namespace std;


int main() 
{
int n,r,a[n],i;

printf("enter the array size");

scanf("%d",&n);

for(i=0;i<n;i++)

{
    
scanf("%d",&a[i]);

}

printf("enter the no of rotation");

scanf("%d",&r);

r=r%n;

for(i=r;i<n;i++)
{
    
printf("%d",a[i]);

}

for(i=0;i<r;i++)

{
    
printf("%d",a[i]);

}
	
return 0;

}
