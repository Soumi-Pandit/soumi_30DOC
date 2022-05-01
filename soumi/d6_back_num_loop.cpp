#include<stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>=2;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("10\n0");
}
