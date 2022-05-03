#include<stdio.h>

int main()
{
	int i,j,sum=0,avg;
	int arr[5];
	for(i=0;i<5;i++)
	{
		printf("input :");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/i;
	for(i=4;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n%d",sum);
	printf("\n%d",avg);
}
