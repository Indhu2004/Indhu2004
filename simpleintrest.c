#include<stdio.h>
void main()
{
	float principal,rate,time,simple_intrest;
	printf("enter principal value");
	printf("enter rate value");
	printf("enter time");
	scanf("%f",&principal);
	scanf("%f",&rate);
	scanf("%f",&time);
	simple_intrest=principal*rate*time/100;
	printf("simpleintrest");
}
