#include <iostream>

using namespace std;

class A
{
	int celsius;
	public:
	Temperature()
	{
	celsius = 0;
	}
	friend int temp( A );   
};

int temp( A t )     
{
	t.celsius = 40;
	return t.celsius;
}

int main()
{
	A tm;
	cout << "Temperature in celsius : " << temp( tm ) << endl;
	return 0;
}
