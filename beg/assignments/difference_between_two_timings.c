#include <stdio.h>
int main(void) 
{
int starth,startm,endh,endm; 
int r1,r2,diff,min,hr;
printf("enter the start time hours and minutes");
scanf("%d %d",&sh,&sm);
printf("\nenter the end time hours and minutes");
scanf("%d %d",&eh,&em);
if(starth>endh)
{
endh=endh+12;
}
r1=(starth*60)+startm;
r2=(endh*60)+endm;
diff=r2-r1;
hr=diff/60;
min=diff%60;
printf("\n%dhr:%dmin\n%dhr:%dmin",starth,startm,endh,endm);
printf("\nthe difference is:\n%dhr:%dmin",hr,min);
return 0;
}