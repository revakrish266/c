#include<stdio.h>
int main(void)
{
int i,j,k,count=0,n,arr[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(arr[i]==arr[j])
  {
    arr[i]='*';
    arr[j]='*';  
  }
 }
}
for(i=0;i<n;i++)
{
if(arr[i]!='*')
 {
  if(count==0)
  {
    printf("%d ",arr[i]);
  count++;
 }
  }
}
}
