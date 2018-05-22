#include<stdio.h>
int main(void)
{    
    int i,arr[100],j,k=0,n,arr1[100],temp;
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
                                        arr1[k]=arr[i];
                                        k++;
                                      }
                    }
    }
    for(i=0;i<k;i++)
    {
                    for(j=i+1;j<k;j++)
                    {
                                      if(arr1[i]>arr1[j])
                                      {
                                             temp=arr1[i];
                                             arr1[i]=arr1[j];
                                             arr1[j]=temp;
                                      }
                    }
    }
    for(i=0;i<k;i++)
    {
                    printf("%d ",arr1[i]);
    }
    
}                                                                              
