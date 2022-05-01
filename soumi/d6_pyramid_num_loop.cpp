#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf(" "); 
		}
		for(j=1;j<i+1;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
