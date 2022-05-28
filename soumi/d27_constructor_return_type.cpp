#include<iostream>
using namespace std;

class complex
{
	int re,i;
	public:
		void getdata()
		{
			cout<<"enter real and imaginary part: ";
			cin>>re>>i;
		}
		void display()
		{
			cout<<re<<"+i"<<i;
		}
		complex sum(complex c1,complex c2)
		{
			complex t;
			re=c1.re+c2.re;
			i=c1.i+c2.i;
			return t;
		}
};

int main()
{
	complex obj1,obj2,obj3;
	obj1.getdata();
	obj2.getdata();
	obj3=obj3.sum(obj1,obj2);
	obj3.display();
	return 0;
	
}
