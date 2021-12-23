#include<stdio.h>
void main()
{
	int tminutes,hour,minutes;
	printf("enter the tminutes");
	scanf("%d",&tminutes);
	hour=tminutes/60;
	minutes=tminutes%60;
	printf("%d hour,%d minutes",hour,minutes);
}
