#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b,r;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	sum(a,b);
	printf("sum is %d",a+b);
	return 0;
}
void sum(int a,int b)
{
	a=50;
	b=60;
}
