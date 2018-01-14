#include <stdio.h>

#include<string.h>


int main(void)
 {
	
char str[12];

int len,i,n,flag=0;

scanf("%s",str);

len=strlen(str);

for(i=0;i<len;i++)

{

    if(str[i]>='0'&&str[i]<='9')

    {
 
      flag=1;

       

    }

    else

    {
 
       
        printf("NO");

    }

}

if(flag==1)

{

    printf("YES");

}
	
return 0;

}

