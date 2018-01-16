#include <stdio.h>
 int main()
{
   int num;
int t,flag;
printf("Enter an integer number: ");
scanf("%d",&num);
t=num;
 flag=0;
  while(t!=1)
  {
 if(tempNum%2!=0){
  flag=1;
  break;
   }
  t=t/2;
    }
 if(flag==0)
  printf("%d is a number that is the power of 2.",num);
  else
 printf("%d is not the power of 2.",num);
   
    return 0;
}