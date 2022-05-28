#include<iostream>
using namespace std;

class complex
{
	int re,im;
	public:
		void getdata()
		{
			cout<<"enter real and imaginary part: ";
			cin>>re>>im;
		}
		void display()
		{
			cout<<re<<"+i"<<im;
		}
		void sum(complex c1,complex c2)
		{
			re=c1.re+c2.re;
			im=c1.im+c2.im;
		}
};
int main()
{
	complex obj1,obj2,obj3;
	obj1.getdata();
	obj2.getdata();
	obj3.sum(obj1,obj2);
	obj3.display();
	return 0;
	
}
