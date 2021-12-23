#include<stdio.h>
void main()
{
	int h,m,a,b,tm;
	printf("enter h,m values");
	scanf("%d%d",&h,&m);
	a=h*60;
	b=m+a;
	printf("total minutes are %d",b);
}
