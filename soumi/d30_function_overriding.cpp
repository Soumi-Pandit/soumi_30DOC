#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void show(){
			a=100;
			cout<<a<<endl;
		}
};

class B:public A{
	public:
		int b;
		void show()
		{
			b=90;
			cout<<b+a<<endl;
		}
};

int main()
{
	B obj;
	obj.A::show();
	obj.show();
	
	return 0;

}
