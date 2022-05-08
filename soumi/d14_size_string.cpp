#include<stdio.h>
#include<string.h>
int main()
{
	int i,size=0;
	char str[20];
	printf("enter string to find size :");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';++i)
	{
		size+=1;		
	}
	size-=1;
	printf("length of string is: %d",size);
	
}
