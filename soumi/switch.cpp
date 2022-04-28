#include<stdio.h>

int main()
{
	int a,b,sum,sub,mul,mod,choice;
	printf("....menu driven program for math sproblem....\n");
	printf("1. addition\n");
	printf("2. subtraction\n");
	printf("3. multiplication\n");
	printf("4. modulor division\n");
	printf("5. exit\n");
	printf("what would you you like to perform?  :");
	scanf("%d",&choice);
	
	while(true):
		switch(choice)
		{
			case 1:
				printf("enter numbers :");
				scanf("%d %d",&a,&b);
				printf("sum is %d \n",a+b);
				break;
				
			case 2:
				printf("enter numbers :");
				scanf("%d %d",&a,&b);
				printf("sub is %d\n",a-b);
				break;
				
			case 3:
				printf("enter numbers :");
				scanf("%d %d",&a,&b);
				printf("product is %d\n",a*b);
				break;
				
			case 4:
				printf("enter numbers :");
				scanf("%d %d",&a,&b);
				printf("modulus is %d\n",a%b);
				break;
				
			case 5:
				exit(0);
				break;
			
	}

}
