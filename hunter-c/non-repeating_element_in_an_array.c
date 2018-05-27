#include<stdio.h>
int main(void)
{
int i,j,count=0,no,ar[100];
scanf("%d",&no);
for(i=0;i<no;i++)
{
scanf("%d",&ar[i]);
}
for(i=0;i<no;i++)
{
 for(j=i+1;j<no;j++)
 {
  if(ar[i]==ar[j])
  {
    ar[i]='*';
    ar[j]='*';  
  }
 }
}
for(i=0;i<no;i++)
{
if(ar[i]!='*')
 {
  if(count==0)
  {
    printf("%d ",ar[i]);
  count++;
 }
  }
}
}
