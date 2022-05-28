#include<iostream>
using namespace std;

class guest
{
	public:
		static int x;
		char name[50];
		void getdata()
		{
			cout<<"enter name : ";
			cin>>name;
		}
		void display()
		{
			x=++x;
			cout<<"geust at seat number "<<x<<" is: "<<name<<endl;
		}
};

int guest::x=0;
int main()
{
	guest obj[50];
	for(int i=0;i<50;i++)
	{
		obj[i].getdata();
		obj[i].display();
	}
}
