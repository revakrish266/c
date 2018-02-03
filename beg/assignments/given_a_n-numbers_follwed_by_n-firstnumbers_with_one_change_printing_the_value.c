#include <stdio.h>
 
int main()
{
  int num,i,arr[10];
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
      scanf("%d",&arr[i]);
      if(arr[i]!=i)
      {
          printf("%d",i);
      }
  }
   return 0;
}
