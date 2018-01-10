#include <stdio.h>


int main(void) 
{


int arr[15],n,j,i,temp,temp1;

scanf("%d",&n);

for(i=0;i<n;i++)

{

    scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)

    {
 
       for(j=i+1;j<n;j++)

        {
 
           if(arr[i]>arr[j])

            {
    
            temp=arr[i];

              arr[i]=arr[j];

                arr[j]=temp;
 
           }
  
      }

    }
  
  for(i=0;i<n;i++)
  
  {
 
       if(arr[i]!=arr[i+1])

        {

         temp1=arr[i];
  
       printf("%d",temp1);

        }

    }
 
   
	return 0;

}

 