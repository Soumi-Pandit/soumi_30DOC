#include<stdio.h>
void evodd(int n);
int main()
{
	int n;
	printf("enter no");
	scanf("%d",&n);
	evodd(n);
}
void evodd(int n)
{

   if(n%2==0)
   {
      printf("n is even");
   }
   else
   {
      printf("n is odd");
   }
   				
}
