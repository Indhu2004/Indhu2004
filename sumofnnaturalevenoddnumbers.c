#include<stdio.h>
void main()
{
	int n,sum,sum1,sum2;
	printf("enter n value");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	sum1=n*(n+1);
	sum2=n*n;
	printf("sum of %d natural numbers is %d",n,sum);
	printf("sum of %d even natural numbers is %d",n,sum);
	printf("sum of %d odd natural numbers is %d",n,sum);
}
