#include<stdio.h>

int main()
{
	int a,co=0;
	printf("enter any number");
	scanf("%d",&a);
	co=a%2;
	(co==0)?printf("even %d",a):("odd %d",a);
	return(0);
	
}
	
