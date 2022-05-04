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
	printf("\nsum: %d",sum);
	printf("\navg: %d",avg);
}
