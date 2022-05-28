#include<iostream>
using namespace std;

class student
{
	private:
		int roll;
		char name[20];
		int marks;
	public:
		static int objectcount;
		student()
		{
			objectcount++;
		}
		void getdata();
		void putdata();
	
};


void student::getdata()
{
	cout<<"enter roll number: ";
	cin>>roll;
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter marks: ";
	cin>>marks;
}

void student::putdata()
{
	cout<<"roll number is: "<<roll<<endl;
	cout<<"name is: "<<name<<endl;
	cout<<"marks is: "<<marks<<endl;
}
int student::objectcount=0;
int main()
{
	
	student s1;
	s1.getdata();
	s1.putdata();
	
	student s2;
	s2.getdata();
	s2.putdata();
	
	student s3;
	s3.getdata();
	s3.putdata();
	
	cout<<"total number of object is: "<<student::objectcount;
}
