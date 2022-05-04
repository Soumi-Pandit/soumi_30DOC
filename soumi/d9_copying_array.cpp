#include<stdio.h>

int main()
{
	int arr1[500],arr2[500];
	int i,n;
	printf("number of elements :");
	scanf("%d",&n);
	printf("input %d elements in array: \n",n);
	for(i=0;i<n;i++)
	{
		printf("element %d - ",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	} 
	printf("elements in 1st array ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\nelements in 2nd array ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	
	

}
