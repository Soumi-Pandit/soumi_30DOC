#include<stdio.h>

int main()
{
	int i,n,sum=0;
	printf("enter a number :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}

if(sum==n)
printf("number is perfect");
else
printf("its not perfect");

}
