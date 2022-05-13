#include<stdio.h>
int square(int);
int main()
{
	int a,r;
	printf("enter a number");
	scanf("%d",&a);
	r=square(a);
	printf("square is %d",r);
	return 0;
}
int square(int a)
{
	return(a*a);
}
