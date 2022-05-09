#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char vowels[]="aeiou";
	int i,j,v,c=0;
	printf("enter string :");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;vowels[j]!='\0';j++)
		{
			if(str[i]==vowels[j])
			v+=1;
			else
			c+=1;
			
		}	
	}
	printf("number of vowels :%d\n",v);
	printf("number of consonants :%d",c/10);
	
}
