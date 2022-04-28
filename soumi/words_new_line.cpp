#include<iostream>
#include<string>
#include <cstring>
using namespace std;
int main()
{
	char str[1000];
	cout<<"enter string:";
	fgets(str,1000,stdin);
	int ch=0;
    for(int i=0;str[i]!='\0';i++)
    {
        ch+=1;
    }
	for(int i=0;i<=ch;i++)
	{
		if(str[i]==' ')
		cout<<endl;
		else
		cout<<str[i];
	}
	return 0;
}
