#include<stdio.h>

int main()
{
	int i,c;
	printf("enter number");
	scanf("%d",&i);
	
	for( ;i>=0;i--)
	{
		c=i;
		printf("\n");
		for( ; ;)
		{
			if(c==0)
			break;
			printf("%d",c);
		
			c--;
		}
	}
}
