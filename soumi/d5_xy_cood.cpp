#include<iostream>

using namespace std;

int main()
{
	int x,y;
	cout<<"enter the coordinates: ";
	cin>>x>>y;
	
	if(x>0&&y>0)
	cout<<"point lies in 1st quadrant";
	
	else if(x<0&&y>0)
	cout<<"point lies in 2nd quadrant";
	
	else if(x<0&&y<0)
	cout<<"point lies in 3rd quadrant";
	
	else
	cout<<"point lies in 4th quadrant";
	
	return 0;
}
