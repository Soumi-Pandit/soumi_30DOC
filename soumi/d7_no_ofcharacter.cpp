#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int words,i;
	printf("enter your string :");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		words+=1;
		if(str[i]==' ')
		{
			break;
		}
	}
	printf("number of char: %d",words);
}
