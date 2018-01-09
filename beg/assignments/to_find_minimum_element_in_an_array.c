#include <stdio.h>


int main(void)
 {
	

	int arr[15],i,n,j,min;

	scanf("%d",&n);

	for(i=0;i<n;i++)

	{
	  
  scanf("%d",&arr[i]);

	   
	}
	
min=arr[0];

	for(i=1;i<n;i++)

	{
	
        if(min>arr[i])

	        {

	            min=arr[i];

	        }

	   	}
	 
  	printf("%d",min);

	return 0;

}

