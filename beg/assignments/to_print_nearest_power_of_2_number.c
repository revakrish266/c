#include<stdio.h>
int main(void)
{
	int no,i,aa,r,d;
	printf("enter the number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		aa=pow(2,i);
		if(aa>n)
		{
			d=i;
			break;
		}
	}
	r=pow(2,d);
	printf("\n%d",r);
	
	return 0;
}
