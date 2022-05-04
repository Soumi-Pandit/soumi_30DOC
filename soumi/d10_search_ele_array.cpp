#include<stdio.h>

int main()
{
	int arr[10],i,ele,search;
	printf("enter element :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements to search : ");
	scanf("%d",&search);
	for(i=0;i<5;i++)
	{
		if(arr[i]==search)
		printf("element found at position %d",i);
	}
	
}
