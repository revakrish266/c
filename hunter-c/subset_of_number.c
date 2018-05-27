#include<stdio.h>
int main(void)
{
    int n,m,i,j,arr1[100],arr2[100],c=0,l;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&arr1[i]);
    }
    for(l=0;l<m;l++)
    {
                    scanf("%d",&arr2[l]);
    }
    for(i=0;i<m;i++)
    {
                    for(j=0;i<n;j++)
                    {
                                      if(arr2[i]==arr1[j])
                                      {
                                                          c++;
                                      
                                      }
                    }
    }
    if(c>0)
    {
           printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
