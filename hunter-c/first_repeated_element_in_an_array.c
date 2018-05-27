#include<stdio.h>
int main(void)
{
    int i,j,n,arr[100],c,k=0;
    
                                                    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    	
                    for(j=i+1;j<n;j++)
                    {
if(k==0)
{         
                                      if(arr[i]==arr[j])
                                      {
                        c=arr[i];                            
                                 k++;
                                      }
                    }
                    }
                    
    }
             if(k>0)
             {
             	printf("%d",c);
             }
             else
             {
             	printf("unique");
             }
        
        return 0;
             	 }
             	
