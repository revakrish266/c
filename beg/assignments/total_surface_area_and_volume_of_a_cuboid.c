#include <stdio.h>

int main(void) {

int L,B,H,totalsurfacearea=0,volume=0;
scanf("%d %d %d",&L,&B,&H);
totalsurfacearea=2*((L*B)+(B*H)+(L*H));
volume=L*B*H;
printf("%d",totalsurfacearea);
printf("\n%d",volume);
	return 0;
}
