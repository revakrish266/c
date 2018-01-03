#include <stdio.h>

int main(void) 

{

int n,d,f,sum=0,a=0,i;

printf("\n enter the no of terms");

scanf("%d",&n);

printf("enter the difference");

scanf("%d",&d);

printf("\n enter the first number");

scanf("%d",&f);

for(i=0;i<n;i++)

{
    
a=a+d;
 
   sum=sum+a;
 
   
}

printf("%d",sum);

 return 0;

}

