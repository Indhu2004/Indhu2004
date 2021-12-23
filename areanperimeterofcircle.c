#include<stdio.h>
void main()
{
	float radius,area,perimeter;
	printf("enter the radius value");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	perimeter=2*3.14*radius;
	printf("area of the circle is %f\n",area);
	printf("perimeter of the circle is %f\n",perimeter);
}
